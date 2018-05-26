/*
  Algoritmos e Estruturas de Dados I
  Lista 8 - Registro (struct)

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Parte III
*/

#include <stdio.h>
#include <math.h>

typedef struct Ponto{
  float x;
  float y;
}Ponto;

typedef struct Circunferencia{
  float raio;
  Ponto centro;
}Circunferencia;

float perimetro(Circunferencia c){
  return 2 * M_PI * c.raio;
}

float area(Circunferencia c){
  return M_PI * c.raio * c.raio;
}

float dist(Ponto a, Ponto b){
  return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}

int pontoNaCircunferencia(Circunferencia c, Ponto p1){
  if(dist(c.centro, p1) < c.raio)
    return 1;
  else
    return 0;
}

int main(){
  Circunferencia c;
  Ponto p1;
  printf("Digite as coordenadas (x,y) do centro da Circunferencia: ");
  scanf("%f %f", &c.centro.x, &c.centro.y);
  printf("Digite o valor do raio da Circunferencia: ");
  scanf("%f", &c.raio);
  printf("Digite as coordenadas do ponto P1: ");
  scanf("%f %f", &p1.x, &p1.y);

  printf("Perimetro da Circunferencia: %f\n", perimetro(c));
  printf("Area da Circunferencia: %f\n", area(c));
  if(pontoNaCircunferencia(c, p1))
    printf("O ponto P1 esta dentro da Circunferencia\n");
  else
    printf("O ponto P1 nao esta dentro da Circunferencia\n");
  return 0;
}
