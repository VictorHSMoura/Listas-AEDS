/*
  Algoritmos e Estruturas de Dados I
  Lista 1 - Estruturas Básicas

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 2
*/

#include <stdio.h>
#include <math.h>

int main(){
  float a, b, c, d;

  printf("Digite os valores de A, B, C e D nessa ordem:\n");
  scanf("%f %f %f %f", &a, &b, &c, &d);

  printf("a + b = %f\n", a+b);  //a)
  printf("a/c = %f\n", a/c);  //b)
  printf("a^2 = %f\n", pow(a,2)); //c)
  printf("b * c = %f\n", b*c);  //d)
  printf("a * b - c = %f\n", a*b-c);  //e)
  printf("a + b * c = %f\n", a+b*c);  //f)
  printf("(a + b) * c = %f\n", (a+b)*c);  //g)
  printf("sin(a) = %f\n", sin(a));  //h)
  printf("sqrt(b) = %f\n", sqrt(b));  //i)
  printf("a + b + c = %f\n", a+b+c);  //j)
  printf("a * b * c = %f\n", a*b*c);  //k)
  printf("(a + b + c)/ d = %f\n", (a+b+c)/d); //l)
  printf("(a + b) * (a - d) = %f\n", (a+b) * (a-d));  //m)
  printf("(b / c) + (a * d) = %f\n", (b/c) + (a*d));  //n)
  printf("sin(b) + cos(c) = %f\n", sin(b)+cos(c));  //o)
  printf("(b + a)/c - (d + a) = %f\n", (b+a)/c - (d+a));  //p)

  return 0;
}
