/*
  Algoritmos e Estruturas de Dados I
  Lista 3 - Estruturas Condicionais

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 4
*/

#include <stdio.h>

int main(){
  char sexo;
  int altura;
  float peso;

  printf("Digite seu sexo (M para mulheres e H para homens): ");
  scanf("%c", &sexo);

  //Se sexo inválido, então a execução termina neste if
  if(sexo != 'H' && sexo != 'h' && sexo != 'M' && sexo != 'm'){
    printf("Sexo fora das especificações pedidas.\n");
  }

  //Se sexo válido, continua-se a execução normal
  else{
    printf("Digite sua altura em centímetros: ");
    scanf("%d", &altura);
    if(sexo == 'H' || sexo == 'h')
      peso = (72.7*(altura/100.0))-58;
    else
      peso = (62.1*(altura/100.0))-44.7;

    printf("Peso ideal: %.3f\n", peso);
  }

  return 0;
}
