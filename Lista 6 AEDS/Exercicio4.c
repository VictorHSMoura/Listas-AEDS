/*
  Algoritmos e Estruturas de Dados I
  Lista 6 - Função / Procedimento, Parâmetro, Vetor

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 4
*/

#include <stdio.h>
#include <stdlib.h>

int negativos(int n, float vet[]){
  int i, contador = 0;
  for(i = 0; i < n; i++){
    if(vet[i] < 0)
      contador++;
  }
  return contador;
}

int main(){
  float *vetor;
  int n, i;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  vetor = (float *) malloc(n * sizeof(float));
  for(i = 0; i < n; i++){
    printf("Digite o %do elemento do vetor: ", i+1);
    scanf("%f", &vetor[i]);
  }
  printf("Quantidade de numeros negativos no vetor: %d\n", negativos(n, vetor));
  free(vetor);
}
