#!/bin/sh

if type gcc.exe &> /dev/null; then
    alias gcc=gcc.exe
    alias ar=ar.exe
fi



src_files="$(find -iwholename "./src/*.c" -print0 | xargs -0)"
inc="-I./inc"
objs_out="./out/Tmath"

gcc $inc -c $src_files -std=c17

objs="$(find -iname "*.o" -print0 | xargs -0)"

ar rcs ./out/tmath.a $objs

rm *.o