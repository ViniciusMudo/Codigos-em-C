#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	long long int num;
	int n;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe um número inteiro: ");
	scanf("%lld", &num);             
	n=log2(num); //"log()= log onde a base é 10", "log2()= log do próprio sistema"
	if (pow(2, n)==num){    
     	printf("\n   %lld = 2^%ld\n", num, n);	
	}else{	
	    printf("\n   %lld não é potência de 2!!!\n", num);
	}	
	return 0;
}

