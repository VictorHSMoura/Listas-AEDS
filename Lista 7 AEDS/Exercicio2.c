#include <stdio.h>

#define N 100

float media_matriz(int n, float mat[][N]){
  int i, j;
  float media = 0;
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      media += mat[i][j];
    }
  }
  return (media/(n*n));
}

int main(){
  float mat[N][N];
  int n, i, j;
  printf("Digite a cardinalidade da matriz: ");
  scanf("%d", &n);
  printf("Matriz:\n");
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%f", &mat[i][j]);
    }
  }
  printf("Media da matriz: %.2f\n", media_matriz(n, mat));
  return 0;
}
