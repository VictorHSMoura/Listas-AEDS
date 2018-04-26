/*
  Algoritmos e Estruturas de Dados I
  Lista 6 - Função / Procedimento, Parâmetro, Vetor

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 5
*/

#include <stdio.h>
#include <stdlib.h>

int pares(int n, int vet[]){
  int i, contador = 0;
  for(i = 0; i < n; i++){
    if(vet[i]%2 == 0)
      contador++;
  }
  return contador;
}

int main(){
  int *vetor, n, i;
  printf("Digite a quantidade de elementos do vetor: ");
  scanf("%d", &n);
  vetor = (int *) malloc(n * sizeof(int));
  for(i = 0; i < n; i++){
    printf("Digite o %do elemento do vetor: ", i+1);
    scanf("%d", &vetor[i]);
  }
  printf("Quantidade de pares no vetor: %d\n", pares(n, vetor));
  free(vetor);
  return 0;
}
