#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	long long int num;
	int n, base;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe um número inteiro: ");
	scanf("%lld", &num);
	printf("Informe a base da potência:");
	scanf("%d", &base);             
	n=log(num)/log(base); //"log()= log onde a base é 10", "log2()= log do próprio sistema"
	if (pow(base, n)==num){    // n=log10(numero qualquer)/log10(da base que você quiser
     	printf("\n   %lld = %d^%ld\n", num, base, n);	
	}else{	
	    printf("\n   %lld não é potência de %d!!!\n", num, base);
	}	
	return 0;
}

