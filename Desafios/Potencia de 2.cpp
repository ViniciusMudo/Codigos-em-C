#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	long long int num;
	int n;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe um n�mero inteiro: ");
	scanf("%lld", &num);             
	n=log2(num); //"log()= log onde a base � 10", "log2()= log do pr�prio sistema"
	if (pow(2, n)==num){    
     	printf("\n   %lld = 2^%ld\n", num, n);	
	}else{	
	    printf("\n   %lld n�o � pot�ncia de 2!!!\n", num);
	}	
	return 0;
}

