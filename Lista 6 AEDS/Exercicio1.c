/*
  Algoritmos e Estruturas de Dados I
  Lista 6 - Função / Procedimento, Parâmetro, Vetor

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 1
*/

#include <stdio.h>
#include <stdlib.h>

int converteHora(int horas, int minutos){
  int totalMinutos = (horas * 60) + minutos;
  return totalMinutos;
}

int diferencaMinutos(int hora1, int minuto1, int hora2, int minuto2){
  int totalMin1, totalMin2;
  totalMin1 = converteHora(hora1, minuto1);
  totalMin2 = converteHora(hora2, minuto2);

  return totalMin2 - totalMin1; //considerando que o segundo é maior que o primeiro
}

int main(){
  int hr1, hr2, min1, min2, diferenca;
  printf("Faixa Horas: 0 - 23\n");
  printf("Faixa Minutos: 0 - 59\n");

  printf("Digite o primeiro horario (horas e minutos separados por espaco): ");
  scanf("%d %d", &hr1, &min1);
  printf("Digite o segundo horario (horas e minutos separados por espaco): ");
  scanf("%d %d", &hr2, &min2);

  if(hr1 < 0 || hr1 > 23 || hr2 < 0 || hr2 > 23){
    printf("Formato de horas fora do especificado. Encerrando programa...\n");
    exit(1);
  }
  else if(min1 < 0 || min1 > 59 || min2 < 0 || min2 > 59){
    printf("Formato de minutos fora do especificado. Encerrando programa...\n");
    exit(1);
  }
  else{
    printf("A diferenca em minutos do dois horarios eh: %d min\n", diferencaMinutos(hr1, min1, hr2, min2));
  }
  return 0;
}
