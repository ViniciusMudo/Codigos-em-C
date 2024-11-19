#include <stdio.h>
#include <locale.h>
int main(){
	float salario, salNovo;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("Informe o seu salário:");
	scanf("%f", &salario);
	salNovo=salario+(salario*0.153);
	printf("\nParabéns você recebeu um aumento de 15,3%%\nNovo salário de: R$%.2f", salNovo);
	return 0;
}

