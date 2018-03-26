/*
  Algoritmos e Estruturas de Dados I
  Lista 2 - Estruturas Básicas, Tipos, Variáveis, Operações

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 4
*/

#include <stdio.h>
#include <math.h>

int main(){
  float raio, area, perimetro;

  printf("Digite o raio da circunferência: ");
  scanf("%f", &raio);

  //utilizando a constante pi(M_PI) nativa da math.h
  perimetro = 2 * M_PI * raio;
  area = M_PI * pow(raio, 2);

  printf("Perímetro: %f/ Área: %f\n", perimetro, area);

  return 0;
}
