/*
  Algoritmos e Estruturas de Dados I
  Lista 6 - Função / Procedimento, Parâmetro, Vetor

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 2
*/

#include <stdio.h>

//resolução por troca entre as variáveis
void crescTroca(int n1, int n2, int n3){
  int aux;  //usado pra armazenar numeros durante as trocas
  if(n2 < n1){
    aux = n1;
    n1 = n2;
    n2 = aux;
  }
  if(n3 < n1){
    aux = n1;
    n1 = n3;
    n3 = aux;
  }
  if(n3 < n2){
    aux = n2;
    n2 = n3;
    n3 = aux;
  }
  printf("%d %d %d\n", n1, n2, n3);
}

//resolução por comparação
void crescente(int n1, int n2, int n3){
  if(n1 <= n2){
    if(n3 <= n1){
      printf("%d %d %d\n", n3, n1, n2);
    }
    else{
      if(n2 <= n3)
        printf("%d %d %d\n", n1, n2, n3);
      else
        printf("%d %d %d\n", n1, n3, n2);
    }
  }
  else{
    if(n3 <= n2){
      printf("%d %d %d\n", n3, n2, n1);
    }
    else{
      if(n1 <= n3)
        printf("%d %d %d\n", n2, n1, n3);
      else
        printf("%d %d %d\n", n2, n3, n1);
    }
  }
}

int main(){
  int num1, num2, num3;
  printf("Digite 3 numeros inteiros: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  crescente(num1, num2, num3);
  crescTroca(num1, num2, num3);
}
