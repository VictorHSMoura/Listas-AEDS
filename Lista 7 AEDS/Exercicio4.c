#include <stdio.h>

#define N 100

void transposta(int n, float A[][N], float T[][N]){
  int i, j;
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      T[i][j] = A[j][i];
    }
  }
  printf("Matriz Transposta:\n");
  for(i = 0; i < n; i++){
    for(j = 0; j< n; j++){
      printf("%.2f ", T[i][j]);
    }
    printf("\n");
  }
}

int main(){
  float A[N][N], T[N][N];
  int n, i, j;
  printf("Digite a cardinalidade da matriz: ");
  scanf("%d", &n);
  printf("Matriz A:\n");
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%f", &A[i][j]);
    }
  }
  transposta(n, A, T);
  return 0;
}
