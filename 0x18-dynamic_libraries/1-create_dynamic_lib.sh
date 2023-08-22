#!/bin/bash
# Compile all .c files in the current directory into a dynamic library (liball.so)
gcc -std=gnu89 -fPIC -c *.c
gcc -shared -o liball.so *.o
