/*
  Algoritmos e Estruturas de Dados I
  Lista 2 - Estruturas Básicas, Tipos, Variáveis, Operações

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 1
*/

#include <stdio.h>

int main(){
  int num1, num2;
  int som, sub, mult, divi, res;

  printf("Digite dois números inteiros:\n");
  scanf("%d %d", &num1, &num2);

  //Armazenamento das operações de soma, subtração e multiplicação
  som = num1 + num2;
  sub = num1 - num2;
  mult = num1 * num2;

  printf("Resultado da soma %d + %d = %d\n", num1, num2, som);
  printf("Resultado da subtração %d - %d = %d\n", num1, num2, sub);
  printf("Produto da multiplicação %d * %d = %d\n", num1, num2, mult);

  //Conferindo se ocorre divisão por zero
  if(num2 == 0)
    printf("Operação de divisão e resto não podem ser executadas. Divisão por zero\n");
  else{
    divi = num1/num2;
    res = num1%num2;

    printf("Quociente da divisão %d / %d = %d\n", num1, num2, divi);
    printf("Resto da divisão %d / %d = %d\n", num1, num2, res);
  }

  return 0;
}
