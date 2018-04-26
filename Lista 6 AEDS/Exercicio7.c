/*
  Algoritmos e Estruturas de Dados I
  Lista 6 - Função / Procedimento, Parâmetro, Vetor

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 7
*/

#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int n, int vetor[]){
  int i;
  for(i = 0; i < n; i++)
    printf("%d ", vetor[i]);
  printf("\n");
}

int somatorios(int n, int v[], int w[]){
  int i;
  for(i = 0; i < n; i++){
    if(i == 0)
      w[i] = v[i];
    else
      w[i] = v[i]+w[i-1];
  }
  printf("Vetor V: ");
  imprimeVetor(n, v);
  printf("Vetor W: ");
  imprimeVetor(n, w);
  return 1;
}


int main(){
  int *v, *w, n, i;
  printf("Digite a quantidade de elementos do vetor: ");
  scanf("%d", &n);
  v = (int *) malloc(n * sizeof(int));
  w = (int *) malloc(n * sizeof(int));
  for(i = 0; i < n; i++){
    printf("Digite o %do elemento do vetor: ", i+1);
    scanf("%d", &v[i]);
  }
  if(somatorios(n, v, w))
    printf("Operacao concluida com sucesso\n");
  free(v);
  free(w);
  return 0;
}
