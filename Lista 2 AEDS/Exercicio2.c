/*
  Algoritmos e Estruturas de Dados I
  Lista 2 - Estruturas Básicas, Tipos, Variáveis, Operações

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 2
*/

#include <stdio.h>

int main(){
  int segundos, minutos, horas;

  printf("Digite o número de segundos que deseja calcular: ");
  scanf("%d", &segundos);

  /*
    Tabela de Conversão:
      1 hora = 60 minutos
      1 minutos = 60 segundos
      Logo: 1 hora = 3600 segundos
  */

  horas = segundos/3600;
  minutos = (segundos%3600)/60;
  segundos = segundos % 60;

  printf("%d hrs, %d min e %d seg\n", horas, minutos, segundos);

  return 0;
}
