/*
  Algoritmos e Estruturas de Dados I
  Lista 4 - Estruturas de Controle e de Repetição/ Função

  Victor Hugo Silva Moura
  Matrícula: 2018054958

  Questão 1
*/

#include <stdio.h>

int fat(int n){
  int i;

  if(n > 0){
    for(i = n; i > 1; i--)
      n *= (i-1);
    return n;
  }
  return 0; //retorna 0 para números negativos e para o 0
}

int mdc(int a, int b){
    int resto;

    //inversão de variáveis caso b for maior
    if(b > a){
        int aux;
        aux = a;
        a = b;
        b = aux;
    }
    //resolução por algoritmo de Euclides
    do{
        resto = a%b;
        a = b;
        b = resto;
    }while(resto!=0);
    return a;
}

int mdc3(int a, int b, int c){
    return mdc(mdc(a,b),c); //transitividade do mdc
}

int fib(int n){
  int i, n1 = 0, n2 = 1;

  if(n > 0){
    for(i = 1; i < n; i++){
      n2 += n1;
      n1 = n2 - n1;
    }
    return n1;
  }
  return 0; //retorna 0 para 0 e números negativos
}

int primo(int num){
    int div;
    for(div = 2; div <= num/2; div++){
        //checagem de divisões por 2 até n/2
        if(num%div == 0)
            return 0;
    }
    return 1;
}

void decrescente(int x){
  int i;
  for(i = (x-1); i > 0; i--){
    printf("%d ", i);
  }
  printf("\n");
}

int res(int a, int b){
  if(b < 0){
    printf("Divisão por 0.\n");
    return 0;
  }
  while(a >= b)
      a -= b;
  return a;
}

int form(int n){
  int i, soma = 0;
  for(i = 1; i <= n; i++){
    soma += i*i;
  }
  return soma;
}

int mmc(int a, int b){
    int mmc;
    mmc = (a * b)/mdc(a, b); //cálculo simples de mmc
    return mmc;
}

int div(int a, int b){
  int divisao = 0;
  if(b < 0){
    printf("Divisão por 0.\n");
    return 0;
  }
  while(a >= b){
      a -= b;
      divisao++;
  }
  return divisao;
}

double sqrt(double num, double precisao){
  //método de busca binária
	double min, max, mid;
	min = 0;
	max = num;
	do{
		mid = (max+min)/2;
		if((mid*mid) < num)
			min = mid;
		else if((mid*mid) > num)
			max = mid;
	}while((mid*mid) < (num - precisao) || (mid * mid) > (num + precisao));
	return mid;
}

int dig(int n){
  int soma = 0;

  //utilizando a função div
  while(div(n, 10) > 0){
    soma += res(n, 10);
    n /= 10;
  }
  soma += n;
  return soma;
}

//troca de nome para evitar conflito com função nativa do C
int exp(int k, int n){
  int i, varK = k;
  if(n == 0)
    return 1;
  else if(n < 0)
    return 0;

  for(i = 1; i < n; i++){
    k *= varK;
  }
  return k;
}

void crescente(int x){
  int i;
  for(i = 1; i <= x; i++)
    printf("%d ", i);
  printf("\n");
}

int main(){
  int op;
  int a, b, c, k, n, x;
  double num;
  do{
    printf("1)fat\n"
           "2)mdc\n"
           "3)mdc3\n"
           "4)fib\n"
           "5)primo\n"
           "6)decrescente\n"
           "7)res\n"
           "8)form\n"
           "9)mmc\n"
           "10)div\n"
           "11)sqrt\n"
           "12)dig\n"
           "13)exp\n"
           "14)crescente\n"
           "15)sair\n");
    scanf("%d", &op);
    switch(op){
      case 1:
        scanf("%d", &n);
        printf("Fat(%d) = %d\n", n, fat(n));
        break;
      case 2:
        scanf("%d %d", &a, &b);
        printf("Mdc(%d, %d) = %d\n", a, b, mdc(a, b));
        break;
      case 3:
        scanf("%d %d %d", &a, &b, &c);
        printf("Mdc(%d, %d, %d) = %d\n", a, b, c, mdc3(a, b, c));
        break;
      case 4:
        scanf("%d", &n);
        printf("Fib(%d) = %d\n", n, fib(n));
        break;
      case 5:
        scanf("%d", &x);
        if(primo(x))
          printf("%d eh primo\n", x);
        else
          printf("%d nao eh primo\n", x);
        break;
      case 6:
        scanf("%d", &x);
        decrescente(x);
        break;
      case 7:
        scanf("%d %d", &a, &b);
        printf("%d %% %d = %d\n", a, b, res(a, b));
        break;
      case 8:
        scanf("%d", &n);
        printf("Form(%d) = %d\n", n, form(n));
        break;
      case 9:
        scanf("%d %d", &a, &b);
        printf("Mmc(%d, %d) = %d\n", a, b, mmc(a, b));
        break;
      case 10:
        scanf("%d %d", &a, &b);
        printf("%d / %d = %d\n", a, b, div(a, b));
        break;
      case 11:
        scanf("%lf", &num);
        printf("Sqrt(%lf) = %lf\n", num, sqrt(num, 0.0000001)); //precisao aumentada pra obter valores mais corretos
        break;
      case 12:
        scanf("%d", &n);
        printf("Dig(%d) = %d\n", n, dig(n));
        break;
      case 13:
        scanf("%d %d", &k, &n);
        printf("Exp(%d, %d) = %d\n", k, n, exp(k,n));
        break;
      case 14:
        scanf("%d", &x);
        crescente(x);
        break;
      case 15:
        printf("Obrigado por utilizar nosso programa. Ate mais!\n");
        break;
      default:
        printf("Opcao invalida\n");
        break;
    }
  }while(op != 15);
  return 0;
}
