#include <stdio.h>
#include <locale.h>
int main(){
	float salario, salNovo;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("Informe o seu sal�rio:");
	scanf("%f", &salario);
	salNovo=salario+(salario*0.153);
	printf("\nParab�ns voc� recebeu um aumento de 15,3%%\nNovo sal�rio de: R$%.2f", salNovo);
	return 0;
}

