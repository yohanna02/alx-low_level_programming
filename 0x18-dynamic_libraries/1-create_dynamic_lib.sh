#!/bin/bash
# create_static_lib.sh

# Create an object file from each .c file in the current directory
for file in *.c; do
    gcc -c -fPIC "$file"
done

# Create a static library from all the object files
gcc -shared *.o -o liball.so
