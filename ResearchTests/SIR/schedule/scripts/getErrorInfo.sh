#!/bin/bash

prog=schedule


(printf "{\n"
for f in {1..9}; do
  (printf "\n\n"
  echo Diff Version $f 
  echo
  diff ../source.alt/source.orig/$prog.c ../versions.alt/versions.orig/v$f/$prog.c ) 1>&2
  read error
  echo "$f: ($error,),"
done

printf "}\n"
) > ../errorInfo
