/*
  Algoritmos e Estruturas de Dados I
  Lista 9 - Arquivos

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 4
*/

#include <stdio.h>

float funcao(float num){
  return ((num*num)-(5*num)+1);
}

int main(){
  FILE *arquivo1, *arquivo2;
  float num;
  arquivo1 = fopen("Arquivos/reais.txt", "r");
  if(arquivo1 != NULL){
    arquivo2 = fopen("Arquivos/funcao1.txt", "w");
    if(arquivo2 != NULL){
      while(!feof(arquivo1)){
        fscanf(arquivo1, "%f\n", &num);
        fprintf(arquivo2, "%f\n", funcao(num));
      }
      fclose(arquivo2);
    }
    else{
      printf("Erro ao abrir arquivo de destino\n");
    }
    fclose(arquivo1);
  }
  else{
    printf("Erro ao abrir arquivo de origem\n");
  }
  return 0;
}
