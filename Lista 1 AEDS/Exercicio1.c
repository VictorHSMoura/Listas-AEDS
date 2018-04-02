/*
  Algoritmos e Estruturas de Dados I
  Lista 1 - Estruturas Básicas

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 1
*/

#include <stdio.h>
#include <math.h>

int main(){

  printf("3 + 4 = %d\n", 3+4);  // a)
  printf("7/4 = %d\n", 7/4);  // b)
  printf("3^2 = %d\n", (int)pow(3,2));  // c)  **conversão de tipo necessária
  printf("5.3 * 2.1 = %f\n", 5.3*2.1); //d)
  printf("2 * 5 - 2 = %d\n", 2*5-2);  //e)
  printf("2 + 2 * 5 = %d\n", 2+2*5);  //f)
  printf("(2 + 5) * 3 = %d\n", (2+5)*3);  //g)
  printf("sin(3.141502) = %f\n", sin(3.141502));  //h)
  printf("sqrt(5) = %f\n", sqrt(5));  //i)
  printf("1 + 2 + 3 = %d\n", 1+2+3);  //j)
  printf("1 * 2 * 3 = %d\n", 1*2*3);  //k)
  printf("(1 + 2 + 3) / 3.0 = %f\n", (1+2+3)/3.0);  //l)
  printf("(2 + 4) * (3 -1) = %d\n", (2+4)*(3-1)); //m)
  printf("(9 / 3) + (3 * 2) = %d\n", (9/3)+(3*2));  //n)
  printf("sin(4.5) + cos(3.7) = %f\n", sin(4.5) + cos(3.7));
  printf("(10.3 + 8.4)/50.3 - (10.3 + 8.4) = %f\n", (10.3+8.4)/50.3 - (10.3+8.4));

  return 0;
}
