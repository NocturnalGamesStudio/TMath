#!/bin/sh

static_libs="./out/lib"
src_files="$(find -iwholename "./tests/*.c" -print0 | xargs -0) $static_libs"
inc="-I./inc"
out="-o ./out/tests.exe"

gcc.exe $inc $src_files $out
