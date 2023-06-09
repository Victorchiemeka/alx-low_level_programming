#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library
ar rcs liball.a *.o

# Clean up by deleting the object files
rm *.o

