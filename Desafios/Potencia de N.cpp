#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	long long int num;
	int n, base;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe um n�mero inteiro: ");
	scanf("%lld", &num);
	printf("Informe a base da pot�ncia:");
	scanf("%d", &base);             
	n=log(num)/log(base); //"log()= log onde a base � 10", "log2()= log do pr�prio sistema"
	if (pow(base, n)==num){    // n=log10(numero qualquer)/log10(da base que voc� quiser
     	printf("\n   %lld = %d^%ld\n", num, base, n);	
	}else{	
	    printf("\n   %lld n�o � pot�ncia de %d!!!\n", num, base);
	}	
	return 0;
}

