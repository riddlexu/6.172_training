cc = icc
COPTFLAGS = -O3 -std=c99

mxm_simple.out: main.c util.h simple.c
	$(CC) $(COPTFLAGS) main.c util.h simple.c -o mxm_simple.out
mxm_switch.out: main.c util.h switch.c
	$(CC) $(COPTFLAGS) main.c util.h switch.c -o mxm_switch.out

clean:
	rm -f *.o *.out
