#include <stdio.h>
#include <locale.h>
int main(){
	int num, origem, q100, q50, q20, q10, q5, q2, q1;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - CONTAGEM DE DINHEIRO - - - # # #\n\n");
	printf("Digite o dinheiro em valor inteiro: ");
	scanf("%d", &num);
	origem=num;
	q100=num/100;
	num=num%100;
	q50=num/50;
	num=num%50;
	q20=num/20;
	num=num%20;
	q10=num/10;
	num=num%10;
	q5=num/5;
	num=num%5;
	q2=num/2;
	num=num%2;
	q1=num/1;
	printf("\n Dinheiro: %d\n", origem);
	printf("\n %d nota(s) de 100,00.", q100);
	printf("\n %d nota(s) de 50,00.", q50);
	printf("\n %d nota(s) de 20,00.", q20);
	printf("\n %d nota(s) de 10,00.", q10);
	printf("\n %d nota(s) de 5,00.", q5);
	printf("\n %d nota(s) de 2,00.", q2);
	printf("\n %d nota(s) de 1,00.", q1);
	return 0;
}

