#!/bin/bash
cat add.in
gcc -Wall add.c -o add

./add >> add.out

cat add.out
