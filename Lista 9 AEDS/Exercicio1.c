/*
  Algoritmos e Estruturas de Dados I
  Lista 9 - Arquivos

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 1
*/

#include <stdio.h>

int main(){
  int n, i, validador, count;
  FILE *arquivo;
  printf("Digite um valor para N: ");
  scanf("%d", &n);

  if(arquivo = fopen("Arquivos/n_numeros_primos.txt", "w")){
    for(i = 2; i <= n; i++){
      count = 2;
      validador = 0;
      while(validador == 0){
        if(i % count == 0 && i != count)
          validador = -1;
        else if(i / count < count)
          validador = 1;
        count++;
      }
      if(validador == 1)
        fprintf(arquivo, "%d\n", i);
    }
    fclose(arquivo);
  }
  else{
    printf("Erro ao abrir arquivo de destino\n");
  }
  return 0;
}
