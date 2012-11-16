#! /bin/bash
gcc -fopenmp -std=c99 sum_omp_better.c -o foo & ./foo 
