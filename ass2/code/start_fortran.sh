#!/bin/sh
gfortran col_major.f90
mv a.out col_major.out
valgrind --tool=cachegrind --I1=8192,2,64 --D1=8192,2,64 --L2=32768,8,64 ./col_major.out 
gfortran row_major.f90
mv a.out row_major.out 
valgrind --tool=cachegrind --I1=8192,2,64 --D1=8192,2,64 --L2=32768,8,64 ./row_major.out 


