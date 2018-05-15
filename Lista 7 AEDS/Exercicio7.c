#include <stdio.h>

#define N 100

void mult_matriz(int n, float A[][N], float B[][N], float P[][N]){
  int i, j, k;
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      P[i][j] = 0;
      for(k = 0; k < n; k++){
        P[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  printf("Produto:\n");
  for(i = 0; i < n; i++){
    for(j = 0; j< n; j++){
      printf("%.2f ", P[i][j]);
    }
    printf("\n");
  }
}

int main(){
  float A[N][N], B[N][N], P[N][N];
  int n, i, j;
  printf("Digite a cardinalidade da matriz: ");
  scanf("%d", &n);
  printf("Matriz A:\n");
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%f", &A[i][j]);
    }
  }
  printf("Matriz B:\n");
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%f", &B[i][j]);
    }
  }
  mult_matriz(n, A, B, P);
  return 0;
}
