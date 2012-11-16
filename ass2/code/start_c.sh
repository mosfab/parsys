#!/bin/sh
gcc col_major.c
mv a.out col_major.out
valgrind --tool=cachegrind --I1=8192,2,64 --D1=8192,2,64 --L2=32768,8,64 ./col_major.out 1024
gcc row_major.c
mv a.out row_major.out 
valgrind --tool=cachegrind --I1=8192,2,64 --D1=8192,2,64 --L2=32768,8,64 ./row_major.out 1024


