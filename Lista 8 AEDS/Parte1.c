/*
  Algoritmos e Estruturas de Dados I
  Lista 8 - Registro (struct)

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Parte I
*/
#include <stdio.h>

typedef struct Ponto{
  float x;
  float y;
}Ponto;

void atribuiValorPonto(float a, float b, Ponto *ponto){
    ponto->x = a;
    ponto->y = b;
}

int main(){
  Ponto ponto;
  float x, y;
  printf("Digite as coordenadas (x,y) do seu ponto, respectivamente:\n");
  scanf("%f %f", &x, &y);
  atribuiValorPonto(x, y, &ponto);
  printf("Coordenadas do ponto: (%f, %f)\n", ponto.x, ponto.y);
  return 0;
}
