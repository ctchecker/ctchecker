#!/usr/bin/env bash
# linking example

if [ "$(uname)" == "Darwin" ]; then
        EXT="dylib"
else
        EXT="so"
fi

CPPFLAGS="-O0 -g -emit-llvm"
LLVMLIBS=
LDFLAGS=
LEVEL="../../../.."

# if your instrumentation code calls into LLVM libraries, then comment out the above and use these instead:
#CPPFLAGS=`llvm-config --cppflags`
#LLVMLIBS=`llvm-config --libs`
#LDFLAGS=`llvm-config --ldflags`

cd ../../
pwd
make
cd -


## compile the instrumentation module to bitcode
## clang $CPPFLAGS -O0 -emit-llvm -c sample.cpp -o sample.bc
$LEVEL/Debug+Asserts/bin/clang  $INCLUDES $CPPFLAGS -c main.c -o test.bc
$LEVEL/Debug+Asserts/bin/clang -O0 -g -emit-llvm -S main.c

# $LEVEL/Debug+Asserts/bin/opt -mem2reg -inline -inline-threshold=0 $1 -o $1
# $LEVEL/Debug+Asserts/bin/opt -mem2reg $1 -o $1
$LEVEL/Debug+Asserts/bin/opt -instnamer test.bc -o test.bc
$LEVEL/Debug+Asserts/bin/llvm-dis test.bc

## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
$LEVEL/Debug+Asserts/bin/opt -stats -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
  -constraint-generation -vulnerablebranchwrapper -debug < test.bc 2> tmp.dat > /dev/null

cat tmp.dat | grep '<:' > constraints.con

## link instrumentation module
#llvm-link welcome.bc sample.bc -o welcome.linked.bc

## compile to native object file
#llc -filetype=obj welcome.linked.bc -o=welcome.o

## generate native executable
#g++ welcome.o $LLVMLIBS $LDFLAGS -o welcome

#./welcome


CONS_FILENAME=$( echo 'constraints.con' | tr '/' '-')
cat tmp.dat | grep '<:' > $CONS_FILENAME