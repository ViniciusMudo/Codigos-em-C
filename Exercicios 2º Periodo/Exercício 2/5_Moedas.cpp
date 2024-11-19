#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	int q100, q50, q20, q10, q5, q2, q1, q050, q025, q010, q005, q001;
	double origem, valor, resto;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - CONTAGEM DE DINHEIRO - - - # # #\n\n");
	printf("Digite o valor do dinheiro: ");
	scanf("%lf", &valor);
	origem=valor;
	q100=abs(valor/100); // abs = módulo
	resto=fmod(valor, 100); // fmod tira o resto de um número real
	q50=abs(resto/50);
	resto=fmod(resto, 50);
	q20=abs(resto/20);
	resto=fmod(resto, 20);
	q10=abs(resto/10); 
	resto=fmod(resto, 10);
	q5=abs(resto/5); 
	resto=fmod(resto, 5);
	q2=abs(resto/2); 
	resto=fmod(resto, 2);
	q1=abs(resto/1); 
	resto=fmod(resto, 1);
	q050=abs(resto/0.5); 
	resto=fmod(resto, 0.5);
	q025=abs(resto/0.25); 
	resto=fmod(resto, 0.25);
	q010=abs(resto/0.1); 
	resto=fmod(resto, 0.1);
	q005=abs(resto/0.05); 
	resto=fmod(resto, 0.05);
	q001=abs(resto/0.01); 
	resto=fmod(resto, 0.01);
	printf("\n Dinheiro: %.2lf\n", origem);
	// NOTAS
	printf("\n %d nota(s) de 100,00.", q100);
	printf("\n %d nota(s) de 50,00.", q50);
	printf("\n %d nota(s) de 20,00.", q20);
	printf("\n %d nota(s) de 10,00.", q10);
	printf("\n %d nota(s) de 5,00.", q5);
	printf("\n %d nota(s) de 2,00.", q2);
    // MOEDAS
	printf("\n\n %d nota(s) de 1,00.", q1);
	printf("\n %d nota(s) de 0,50.", q050);
	printf("\n %d nota(s) de 0,25.", q025);
	printf("\n %d nota(s) de 0,10.", q010);
	printf("\n %d nota(s) de 0,05.", q005);
	printf("\n %d nota(s) de 0,01.\n", q001);
	return 0;
}
