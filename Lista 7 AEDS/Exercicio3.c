#include <stdio.h>

#define N 100

void identidade(int n, float A[][N]){
  int i, j;
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if(i == j)
        A[i][j] = 1;
      else
        A[i][j] = 0;
    }
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%.2f ", A[i][j]);
    }
    printf("\n");
  }
}

int main(){
  float matriz[N][N];
  int n;
  printf("Digite a cardinalidade da matriz: ");
  scanf("%d", &n);
  identidade(n, matriz);
  return 0;
}
