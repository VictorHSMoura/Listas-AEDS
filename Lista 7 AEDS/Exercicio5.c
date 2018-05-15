#include <stdio.h>

#define N 100

int simetrica(int n, float A[][N]){
  int i, j;
  for(i = 0; i < n; i++){
    for(j = i+1; j < n; j++){
      if(A[i][j] != A[j][i])
        return 0;
    }
  }
  return 1;
}

int main(){
  float A[N][N];
  int n, i, j;
  printf("Digite a cardinalidade da matriz: ");
  scanf("%d", &n);
  printf("Matriz A:\n");
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%f", &A[i][j]);
    }
  }
  if(simetrica(n, A))
    printf("Simetrica\n");
  else
    printf("Nao simetrica\n");
  return 0;
}
