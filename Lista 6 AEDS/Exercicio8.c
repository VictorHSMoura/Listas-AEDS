/*
  Algoritmos e Estruturas de Dados I
  Lista 6 - Função / Procedimento, Parâmetro, Vetor

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 8
*/

#include <stdio.h>
#include <math.h>

int raizes(double a, double b, double c, double *raiz1, double *raiz2){
  float delta;
  delta = (b*b) - 4*a*c;
  if(delta < 0)
    return 0;
  else if(delta == 0){
    *raiz1 = -b/2*a;
    return 1;
  }
  else{
    *raiz1 = (-b+sqrt(delta))/2*a;
    *raiz2 = (-b-sqrt(delta))/2*a;
    return 2;
  }
}

int main(){
  double a, b, c, raiz1, raiz2;
  int qteRaizes;

  printf("Digite os valores de a, b e c, respectivamente: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  qteRaizes = raizes(a, b, c, &raiz1, &raiz2);
  switch(qteRaizes){
    case 0: printf("Nao ha raizes reais.\n");
      break;
    case 1: printf("Ha apenas uma raiz real. Raiz: %.3lf\n", raiz1);
      break;
    case 2: printf("Ha duas raizes reais. Raizes: %.3lf e %.3lf\n", raiz1, raiz2);
      break;
  }
  return 0;
}
