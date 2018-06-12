#include <stdio.h>

int fat(int n){
	if(n > 0)
		return n*fat(n-1);
	return 1;
}

int mdc(int a, int b){
	if(b == 0)
		return a;
	return mdc(b, a%b);
}

int mdc3(int a, int b, int c){
	return mdc(mdc(a, b), c);
}

int fib(int n){
	if(n == 0 || n == 1)
		return n;
	return fib(n-1)+fib(n-2);
}

int primoRec(int x, int n){
	if(x == 1)
		return 0;
	else{
		if(x%n == 0 && x != n){
			return 0;
		}
		else if(x/n < n){
			return 1;
		}
		return primoRec(x, n+1);
	}
}

int primo(int x){
	return primoRec(x, 2);
}

void decrescente(int x){
	if(x > 0){
		printf("%d ", x);
		decrescente(x-1);
	}
	else
		printf("\n");
}

int res(int a, int b){
	if(a >= b)
		return res(a-b, b);
	return a;
}

int form(int n){
	if(n > 1)
		return (n*n)+form(n-1);
	return n;
}

int mmc(int a, int b){
	return (a*b)/mdc(a,b);
}

int div(int a, int b){
	if(a >= b)
		return 1 + div(a-b, b);
	return 0;
}

float sqrt2(int n, int i){
	//parâmetro i deve começar como 1

	if((n * 1000000) - (i*i) <= 0)
		return (float)i/1000;
	else
		return sqrt2(n, i+1);
}

int dig(int n){
	if(n / 10 == 0)
		return n;
	else
		return (n%10)+dig(n/10);
}

int exp(int k, int n){
	if(n > 0)
		return k*exp(k, n-1);
	return 1;
}

int crescente(int x){
	if(x > 0){
		crescente(x-1);
		printf("%d ", x);
	}
}

int main(){
	int op;
	int a, b, c, k, n, x, num;
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
			scanf("%d", &num);
			printf("Sqrt(%d) = %f\n", num, sqrt2(num, 1));
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