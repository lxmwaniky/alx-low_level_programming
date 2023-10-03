#!/bin/bash
gcc -Wall -pedantic -Wextra -Werror -std=gnu89 -c *.c
ar rc liball.a *.o
ranlib liball.a
