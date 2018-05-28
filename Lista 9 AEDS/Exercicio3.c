/*
  Algoritmos e Estruturas de Dados I
  Lista 9 - Arquivos

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 3
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
  FILE *arquivo1, *arquivo2, *arquivo3;
  int num;
  arquivo1 = fopen("Arquivos/naturais.txt", "r");
  if(arquivo1 != NULL){
    arquivo2 = fopen("Arquivos/primos.txt", "w");
    if(arquivo2 != NULL){
      arquivo3 = fopen("Arquivos/outros.txt", "w");
      if(arquivo3 != NULL){
        while(!feof(arquivo1)){
          fscanf(arquivo1, "%d\n", &num);
          if(testaPrimo(num))
            fprintf(arquivo2, "%d\n", num);
          else
            fprintf(arquivo3, "%d\n", num);
        }
        fclose(arquivo3);
      }
      else{
        printf("Erro ao abrir arquivo \"outros.txt\"\n");
      }
      fclose(arquivo2);
    }
    else{
      printf("Erro ao abrir arquivo \"primos.txt\"\n");
    }
    fclose(arquivo1);
  }
  else{
    printf("Erro ao abrir arquivo de origem\n");
  }

  return 0;
}
