#!/bin/bash
for file in *.c; do
    output_file="${file%.c}.o"
    gcc -c -fPIC "$file" -o "$output_file"
done
gcc -shared -o liball.so *.o
