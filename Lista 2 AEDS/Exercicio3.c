/*
  Algoritmos e Estruturas de Dados I
  Lista 2 - Estruturas Básicas, Tipos, Variáveis, Operações

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 3
*/

#include <stdio.h>

int main(){
  float num, pFrac;
  int pInt;

  printf("Digite um número real qualquer: ");
  scanf("%f", &num);

  /*
    Retirando primeiro a parte inteira para depois tirar
    a parte fracionária com auxílio da parte inteira
  */
  pInt = (int)num;
  pFrac = num - (float)pInt;

  //recurso de divisão do printf para alinhar como a impressão
  printf("Numero Digitado: %f\n"
         "Parte Inteira: %d\n"
         "Parte Fracionária: %f\n", num, pInt, pFrac);

  return 0;
}
