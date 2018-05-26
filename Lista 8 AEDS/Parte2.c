/*
  Algoritmos e Estruturas de Dados I
  Lista 8 - Registro (struct)

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Parte II
*/
#include <stdio.h>
#include <math.h>

typedef struct Ponto{
  float x;
  float y;
}Ponto;

typedef struct Triangulo{
  Ponto a;
  Ponto b;
  Ponto c;
}Triangulo;

//calcula distancia entre pontos
float calcLado(Ponto a, Ponto b){
  return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}

float perimetro(float lA, float lB, float lC){
  return lA + lB + lC;
}

float area(float lA, float lB, float lC){
  float perim;
  perim = perimetro(lA, lB, lC)/2;
  //Fórmula de Heron
  return sqrt(perim * (perim - lA) * (perim - lB) * (perim - lC));
}

int equilatero(float lA, float lB, float lC){
  if(lA == lB && lB == lC)
    return 1;
  else
    return 0;
}

int main(){
  Triangulo t;
  float lA, lB, lC;
  printf("Digite as coordenadas (x,y) do ponto A do Triangulo: ");
  scanf("%f %f", &t.a.x, &t.a.y);
  printf("Digite as coordenadas (x,y) do ponto B do Triangulo: ");
  scanf("%f %f", &t.b.x, &t.b.y);
  printf("Digite as coordenadas (x,y) do ponto C do Triangulo: ");
  scanf("%f %f", &t.c.x, &t.c.y);

  lA = calcLado(t.a, t.b);
  lB = calcLado(t.b, t.c);
  lC = calcLado(t.c, t.a);

  printf("Perimetro do Triangulo: %f\n", perimetro(lA, lB, lC));
  printf("Area do Triangulo: %f\n", area(lA, lB, lC));
  if(equilatero(lA, lB, lC))
    printf("O Triangulo eh equilatero\n");
  else
    printf("O Triangulo nao eh equilatero\n");
  return 0;
}
