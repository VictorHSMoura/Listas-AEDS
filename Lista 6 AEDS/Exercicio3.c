/*
  Algoritmos e Estruturas de Dados I
  Lista 6 - Função / Procedimento, Parâmetro, Vetor

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 3
*/

#include <stdio.h>

float media(float nota1, float nota2){
  return (nota1 + nota2)/2;
}

float faltas(int aulas, int presenca){
  float frequencia = (float)presenca/aulas;
  return 1.0 - frequencia;
}

void situacao(float mediaFinal){
  printf("Situacao do Aluno: ");
  if(mediaFinal >= 60)
    printf("Aprovado\n");
  else
    printf("Reprovado\n");

}

int main(){
  int totalAulas, matricula, presenca;
  float notaP1, notaP2, notaT1, notaT2, mediaProva, mediaTrab, mediaFinal;

  printf("Digite o total de aulas da turma: ");
  scanf("%d", &totalAulas);
  printf("Digite a matricula do aluno: ");
  scanf("%d", &matricula);
  printf("Digite a nota da primeira e da segunda prova, respectivamente: ");
  scanf("%f %f", &notaP1, &notaP2);
  printf("Digite a nota do primeiro e do segundo trabalho, respectivamente: ");
  scanf("%f %f", &notaT1, &notaT2);
  printf("Digite o total de presencas do aluno: ");
  scanf("%d", &presenca);

  mediaProva = media(notaP1, notaP2);
  mediaTrab = media(notaT1, notaT2);
  mediaFinal = media(mediaProva, mediaTrab);

  printf("Matricula: %d\n", matricula);
  printf("Media das Provas: %.2f\n", mediaProva);
  printf("Media dos Trabalhos: %.2f\n", mediaTrab);
  printf("Media Final: %.2f\n", mediaFinal);
  situacao(mediaFinal);
  printf("Percentual de Faltas: %.2f\n", faltas(totalAulas, presenca));
  return 0;
}
