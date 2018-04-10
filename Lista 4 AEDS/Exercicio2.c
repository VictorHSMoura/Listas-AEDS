/*
  Algoritmos e Estruturas de Dados I
  Lista 4 - Estruturas de Controle e de Repetição/ Função

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 2
*/

#include <stdio.h>

int div(int num1, int num2){
  int quociente = 0;
  while(num2 < num1){
      quociente++;
      num1 -= num2;
  }
  printf("Resto: %d\n", num1);
  return quociente;
}

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Resultado da divisao: %d\n", div(num1, num2));
    return 0;
}
