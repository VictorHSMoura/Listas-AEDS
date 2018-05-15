#include <stdio.h>

#define N 100

void soma_matriz(int n, float A[][N], float B[][N], float S[][N]){
  int i, j;
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      S[i][j] = A[i][j] + B[i][j];
    }
  }
  printf("Soma:\n");
  for(i = 0; i < n; i++){
    for(j = 0; j< n; j++){
      printf("%.2f ", S[i][j]);
    }
    printf("\n");
  }
}

int main(){
  float A[N][N], B[N][N], S[N][N];
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
  soma_matriz(n, A, B, S);
  return 0;
}
