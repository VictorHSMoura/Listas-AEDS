/*
  Algoritmos e Estruturas de Dados I
  Lista 3 - Estruturas Condicionais

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 2
*/

#include <stdio.h>

int main(){
  int num;

  printf("Digite um número inteiro (maior que 0): ");
  scanf("%d", &num);

  if(num <= 0)
    printf("Número inválido. (Menor ou igual a 0)");
  else if(num % 2 == 0)
    printf("O número %d é par\n", num);
  else
    printf("O número %d é ímpar\n", num);

  return 0;
}
