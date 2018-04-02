/*
  Algoritmos e Estruturas de Dados I
  Lista 3 - Estruturas Condicionais

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 1
*/

#include <stdio.h>

int main(){
  int num1, num2;

  printf("Digite dois números inteiros e veja qual deles é menor:\n");
  scanf("%d %d", &num1, &num2);

  //usando operador condicional
  printf("%d é menor\n", (num1 < num2)?num1:num2);

  return 0;
}
