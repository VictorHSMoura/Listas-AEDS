/*
  Algoritmos e Estruturas de Dados I
  Lista 3 - Estruturas Condicionais

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 3
*/

#include <stdio.h>

int main(){
  int idade;

  printf("Digite a idade do nadador: ");
  scanf("%d", &idade);

  //condições feitas das maiores idades para as menores
  if(idade >= 18)
    printf("Nadador da categoria Sênior\n");
  else if(idade >= 14)
    printf("Nadador da categoria Juvenil B\n");
  else if(idade >= 11)
    printf("Nadador da categoria Juvenil A\n");
  else if(idade >= 8)
    printf("Nadador da categoria Infantil B\n");
  else if(idade >= 5)
    printf("Nadador da categoria Infantil A\n");
  else if(idade < 0)
    printf("Idade negativa não permitida\n");
  else
    printf("Nadador não se encaixa em nenhuma categoria no momento\n");

  return 0;
}
