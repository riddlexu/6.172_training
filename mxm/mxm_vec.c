#include "util.h"

void mxm(double a[N][N], double b[N][N], double c[N][N]){
  for (int i = 0; i < N; i++){
    for (int k = 0; k < N; k++){
      for (int j = 0; j < N; j++){
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
}
