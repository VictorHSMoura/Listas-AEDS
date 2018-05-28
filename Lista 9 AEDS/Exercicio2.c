/*
  Algoritmos e Estruturas de Dados I
  Lista 9 - Arquivos

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 2
*/

#include <stdio.h>

int testaPrimo(int n){
  int count = 2, validador = -1;
  if(n == 1)
    return 0;
  while(validador == -1){
    if(n % count == 0 && n != count)
      validador = 0;
    else if(n / count < count)
      validador = 1;
    count++;
  }
  return validador;
}

int main(){
  FILE *arquivo1, *arquivo2;
  int num;
  arquivo1 = fopen("Arquivos/naturais.txt", "r");
  if(arquivo1 != NULL){
    arquivo2 = fopen("Arquivos/classificacao.txt", "w");
    if(arquivo2 != NULL){
      while(!feof(arquivo1)){
        fscanf(arquivo1, "%d\n", &num);
        if(testaPrimo(num))
          fprintf(arquivo2, "%d - primo\n", num);
        else
          fprintf(arquivo2, "%d - não primo\n", num);
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
