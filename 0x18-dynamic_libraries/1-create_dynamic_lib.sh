#!/bin/bash
gcc -Wall -Wextra -Weror -pedantic -c -fPIC *.c
gcc -shared -liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
