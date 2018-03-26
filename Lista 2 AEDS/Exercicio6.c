/*
  Algoritmos e Estruturas de Dados I
  Lista 2 - Estruturas Básicas, Tipos, Variáveis, Operações

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 6
*/

#include <stdio.h>

int main(){
  int valor, n100, n50, n20, n10, n5, n2, n1;
  int aux;

  printf("Digite o valor a ser sacado: R$");
  scanf("%d", &valor);

  /*
    Mesma lógica da conversão de segundos
    Utilização de variável auxiliar
    Notas vão de 1 a 100
  */
  n100 = valor/100;
  aux = valor%100;

  n50 = aux/50;
  aux = aux%50;

  n20 = aux/20;
  aux = aux%20;

  n10 = aux/10;
  aux = aux%10;

  n5 = aux/5;
  aux = aux%5;

  n2 = aux/2;
  aux = aux%2;

  n1 = aux;

  printf("Distribuição:\n"
         "Notas de R$ 100,00: %d\n"
         "Notas de R$  50,00: %d\n"
         "Notas de R$  20,00: %d\n"
         "Notas de R$  10,00: %d\n"
         "Notas de R$   5,00: %d\n"
         "Notas de R$   2,00: %d\n"
         "Notas de R$   1,00: %d\n", n100, n50, n20, n10, n5, n2, n1);

  return 0;
}
