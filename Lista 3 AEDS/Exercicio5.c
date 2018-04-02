/*
  Algoritmos e Estruturas de Dados I
  Lista 3 - Estruturas Condicionais

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 5
*/

#include <stdio.h>
#include <ctype.h>

int main(){
  char sexo;
  int altura;
  float peso;

  printf("Digite seu sexo (M para mulheres e H para homens): ");
  scanf("%c", &sexo);
  printf("Digite sua altura em centímetros: ");
  scanf("%d", &altura);

  //deixa o caractere minúsculo pra facilitar as entradas do switch
  sexo = tolower(sexo);
  switch(sexo){
    case 'h':
      peso = (72.7*(altura/100.0))-58;
      printf("Peso ideal: %.3f\n", peso);
      break;
    case 'm':
      peso = (62.1*(altura/100.0))-44.7;
      printf("Peso ideal: %.3f\n", peso);
      break;
    default:
      printf("Sexo fora das especificações pedidas.\n");
      break;
  }

  return 0;
}
