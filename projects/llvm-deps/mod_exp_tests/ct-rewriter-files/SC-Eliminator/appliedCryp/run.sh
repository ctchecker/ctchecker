#!/usr/bin/env bash
# linking example

if [ "$(uname)" == "Darwin" ]; then
        EXT="dylib"
else
        EXT="so"
fi

COL=""
MEM2REG="-mem2reg"

COL+="WL"
COL+="/FS"
COL+="/FlS"
COL+="/SRC"

if [ "$COL" = "" ] ; then
        COL="Base"
fi
echo "Running with flags: $COL"

NAME=${1%.*}
# change config file for each example
rm config.json
if [[ "$NAME" == *"3way"* ]]; then
        cp config-3way.json config.json
elif [[ "$NAME" == *"des"* ]] && [[ "$NAME" == *"opt"* ]]; then
        cp config-des-opt.json config.json
elif [[ "$NAME" == *"des"* ]] && [[ "$NAME" == *"wo_opt"* ]]; then
        cp config-des-wo-opt.json config.json
elif [[ "$NAME" == *"loki91"* ]]; then
        cp config-loki91.json config.json
else
        echo "Wrong example name"
        exit 1
fi

CPPFLAGS=
LLVMLIBS=
LDFLAGS=

LEVEL="../../../../../.."

$LEVEL/Debug+Asserts/bin/clang -isystem include -I include -O0 -emit-llvm -g -o $NAME".bc" -c $NAME".c"
# if your instrumentation code calls into LLVM libraries, then comment out the above and use these instead:
#CPPFLAGS=`llvm-config --cppflags`
#LLVMLIBS=`llvm-config --libs`
#LDFLAGS=`llvm-config --ldflags`

# CUR=$(pwd)
# cd ../../../;
# $LEVEL/Debug+Asserts/bin/llvm-as $NAME.ll -o $NAME".bc"
$LEVEL/Debug+Asserts/bin/opt -mem2reg -instnamer $NAME".bc" -o $NAME".bc"
$LEVEL/Debug+Asserts/bin/llvm-dis $NAME".bc" -o $NAME"_final.ll"

TIME=$(date +%s)
## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
$LEVEL/Debug+Asserts/bin/opt $MEM2REG -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
  -vulnerablebranch  -debug < $NAME".bc" 2> tmp-$NAME.dat > /dev/null
TIME=$(echo "$(date +%s) - $TIME" | bc)
printf "Execution time: %d seconds\n" $TIME

CONS_FILENAME=$( echo 'constraints-'$NAME'.con' | tr '/' '-')
cat tmp-$NAME.dat | grep '<:' > $CONS_FILENAME

#FILENAME=$( echo 'results_with_source-'$COL'.txt' | tr '/' '-')
#export PATH="$PATH:../../processing_tools" # tmp change to path to have post-processing tools
#python ../../processing_tools/post_analysis.py tmp.dat $START $END $COL 1 $FILE $TIME > $FILENAME

# COL=$( echo 'tmp-'$COL'.dat' | tr '/' '-')

# echo Output log: ./tmp.dat
# mv tmp.dat $COL
