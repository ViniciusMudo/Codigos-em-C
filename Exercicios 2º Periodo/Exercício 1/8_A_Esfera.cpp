#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14
int main(){
	float C, A, V, raio;
	setlocale(LC_ALL, "Portuguese");
	printf("####  A ESFERA  ####");
	printf("\n\nInforme o raio comprimento do raio:");
	scanf("%f", &raio);
	C=2*PI*raio;
	A=4*PI*pow(raio, 2);
	V=(4*PI*pow(raio, 3))/3;
	printf("\na) O comprimento da esfera: %.2f\nb) A área da esfera: %.2f\nc) O volume da esfera: %.2f", C, A, V);
	return 0;
}

