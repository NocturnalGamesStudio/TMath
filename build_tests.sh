#!/bin/sh

if type gcc.exe &> /dev/null; then
    alias gcc=gcc.exe
fi

static_libs="./out/tmath.a"
src_files="$(find -iwholename "./tests/*.c" -print0 | xargs -0) $static_libs"
inc="-I./inc"
out="-o ./out/tests.exe"

gcc $inc $src_files $out
