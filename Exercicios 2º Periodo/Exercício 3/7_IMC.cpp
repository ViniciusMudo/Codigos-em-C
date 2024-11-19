#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	float imc, peso, altura;
	setlocale(LC_ALL, "Portuguese");
	printf("   # # # - - - INDICE DE MASSA CORPORAL - - - # # #\n\n");
	printf("Informe o peso:");
	scanf("%f", &peso);
	printf("Informe a altura:");
	scanf("%f", &altura);
	imc=peso/pow(altura, 2);
	if (imc<=18.5){
		printf("\nAbaixo do peso.\n");
	}
	else if (imc>18.5&&imc<=25){
		printf("\nPeso normal.\n");
	}
	else if (imc>25&&imc<=30){
		printf("\nAcima do peso.\n");
	}
	else if (imc>30){
		printf("\nObeso.\n");
	}
	return 0;
}

