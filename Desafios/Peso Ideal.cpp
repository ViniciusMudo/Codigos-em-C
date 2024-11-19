#include <stdio.h>
#include <locale.h>
#include <ctype.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float peso, altura, imc;
    char sex, nome[30];
	printf("   # # # - - - INDICE DE MASSA CORPORAL - - - # # #\n\n");
	printf("Seu nome: ");
	scanf("%s", nome);
	printf("Informe o peso:");
	scanf("%f", &peso);
	printf("Informe a altura:");
	scanf("%f", &altura); 
	fflush(stdin);
	printf("Seggs?? M ou F: ");
	scanf("%c", &sex);
	sex =  toupper(sex);
	if(sex == 'M'){
		imc = (72.70 * altura) - 58.00;
	}
	else if(sex == 'F'){
		imc = (62.10 * altura) - 44.70; 
	}
	else{
		printf("Sistema não aceita o gênero dito, pois somos muito liberais.");
	}
	printf("Peso ideal: %.2f", imc);
	return 0;
}

