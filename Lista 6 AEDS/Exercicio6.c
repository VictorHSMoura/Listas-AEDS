/*
  Algoritmos e Estruturas de Dados I
  Lista 6 - Função / Procedimento, Parâmetro, Vetor

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 6
*/

#include <stdio.h>
#include <stdlib.h>

int maiores(int n, int vet[], int x){
  int i, contador = 0;
  for(i = 0; i < n; i++){
    if(vet[i] > x)
      contador++;
  }
  return contador;
}

int main(){
  int *vetor, n, x, i;
  printf("Digite a quantidade de elementos do vetor: ");
  scanf("%d", &n);
  vetor = (int *) malloc(n * sizeof(int));
  printf("Digite o valor de X: ");
  scanf("%d", &x);
  for(i = 0; i < n; i++){
    printf("Digite o %do elemento do vetor: ", i+1);
    scanf("%d", &vetor[i]);
  }
  printf("Quantidade de numeros maiores que X(%d): %d\n", x, maiores(n, vetor, x));
  free(vetor);
  return 0;
}
