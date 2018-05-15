#include <stdio.h>
#define N 4

int main(){
  int matriz[N][N], i, j;
  printf("Matriz A[%d][%d]:\n", N, N);
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      printf("Digite o valor de A[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}
