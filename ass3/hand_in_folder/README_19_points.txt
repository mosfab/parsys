Homework 3


############################################################
############################################################
############################################################
Exercise 3

The cache coherency implementation keeps track of the status of cache lines by appending “state bits” to indicate whether the data on the cache line is still valid or is outdated.
Any time a cache line is modified, cache coherence software notifies other caches holding a copy of the same line that its line is invalid.
If data from that line is needed, a new updated copy must be fetched.
A problem is that state bits do not keep track of which part of the line is outdated, but indicates the whole line is outdated.
As a result, a processor can not detect which part of the line is still valid and instead requests a new copy of the entire line
As a result, when two threads update different data elements in the same cache line, they interfere with each other.
One Solution is padding because it shifts the accessed data into different cache lines.

export OMP_NUM_THREADS=1
time ./e2.out 1
real	0m4.969s
user	0m4.902s
sys	0m0.010s

export OMP_NUM_THREADS=2
time ./e2.out 2
real	0m9.133s
user	0m16.303s
sys	0m0.013s

export OMP_NUM_THREADS=4
time ./e2.out 4
real	0m9.517s
user	0m34.632s
sys	0m0.025s

export OMP_NUM_THREADS=8
time ./e2.out 8
real	0m7.957s
user	0m44.763s
sys	0m0.084s

############################################################
############################################################
############################################################
Exercise 4

export OMP_NUM_THREADS=1
time ./e4.out 1
real	0m4.702s
user	0m4.620s
sys	0m0.008s

export OMP_NUM_THREADS=2
time ./e4.out 2
real	0m2.433s
user	0m4.731s
sys	0m0.008s

export OMP_NUM_THREADS=4
time ./e4.out 4
real	0m1.442s
user	0m4.769s
sys	0m0.052s

export OMP_NUM_THREADS=8
time ./e4.out 8
real	0m0.981s
user	0m4.835s
sys	0m0.024s

############################################################
############################################################
############################################################

Exercise 5

export OMP_NUM_THREADS=1
time ./foo

real	0m3.292s
user	0m3.207s
sys	0m0.012s

export OMP_NUM_THREADS=2

real	0m1.596s
user	0m3.084s
sys	0m0.016s

export OMP_NUM_THREADS=4

real	0m1.209s
user	0m3.146s
sys	0m0.009s

export OMP_NUM_THREADS=8

real	0m1.089s
user	0m3.129s
sys	0m0.012s