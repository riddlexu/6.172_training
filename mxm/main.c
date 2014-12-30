#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>

#include "util.h"

double A[N][N];
double B[N][N];
double C[N][N];

int main()
{
  for (int i = 0; i < N; ++i){
    for (int j = 0; j < N; ++j){
      A[i][j] = (double)rand() / (double)RAND_MAX;
      B[i][j] = (double)rand() / (double)RAND_MAX;
      C[i][j] = 0;
    }
  }
  struct timeval start, end;
  gettimeofday(&start, NULL);
      
  mxm(A,B,C);

  gettimeofday(&end, NULL);
  printf("time is %f\n", (end.tv_sec - start.tv_sec) + (1e-6)*(end.tv_usec - start.tv_usec));
}
