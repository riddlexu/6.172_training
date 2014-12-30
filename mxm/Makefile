CC = icc
COPTFLAGS = -O3 -std=c99

mxm_simple.out: main.c util.h simple.c
	$(CC) $(COPTFLAGS) main.c util.h simple.c -o mxm_simple.out
mxm_switch.out: main.c util.h switch.c
	$(CC) $(COPTFLAGS) main.c util.h switch.c -o mxm_switch.out
mxm_vec.out: main.c util.h mxm_vec.c
	$(CC) $(COPTFLAGS) -simd main.c util.h mxm_vec.c -o mxm_vec.out
mxm_omp.out: main.c util.h mxm_omp.c
	$(CC) $(COPTFLAGS) -simd -openmp -vec-report=3 -march=corei7-avx -fp-model fast=2 main.c util.h mxm_omp.c -o mxm_omp.out

clean:
	rm -f *.o *.out
