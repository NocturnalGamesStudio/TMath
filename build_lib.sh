#!/bin/sh

src_files="$(find -iwholename "./src/*.c" -print0 | xargs -0)"
inc="-I./inc"
objs_out="./out/Tmath"

gcc.exe $inc -c $src_files -std=c17

objs="$(find -iname "*.o" -print0 | xargs -0)"

ar.exe rcs ./out/lib $objs

rm *.o