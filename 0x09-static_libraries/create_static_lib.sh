#!/bin/bash
# create_static_lib.sh

# Create an object file from each .c file in the current directory
for file in *.c; do
    gcc -c "$file"
done

# Create a static library from all the object files
ar -rc liball.a *.o
