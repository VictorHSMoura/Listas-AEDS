/*
  Algoritmos e Estruturas de Dados I
  Lista 9 - Arquivos

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 5
*/

#include <stdio.h>
#include <math.h>

float funcao(float num, float a, float b, float c, float d){
  return (a*pow(num,3) + b*pow(num,2) + c*num + d);
}

int main(){
  FILE *arquivo1, *arquivo2;
  float num, a, b, c, d;
  arquivo1 = fopen("Arquivos/reais.txt", "r");
  if(arquivo1 != NULL){
    arquivo2 = fopen("Arquivos/funcao2.txt", "w");
    if(arquivo2 != NULL){
      printf("Digite os valores de A, B, C e D, respectivamente:\n");
      scanf("%f %f %f %f", &a, &b, &c, &d);
      while(!feof(arquivo1)){
        fscanf(arquivo1, "%f\n", &num);
        fprintf(arquivo2, "%f\n", funcao(num, a, b, c, d));
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
