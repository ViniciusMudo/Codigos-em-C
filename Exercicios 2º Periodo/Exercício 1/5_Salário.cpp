#include <stdio.h>
#include <locale.h>
#define COMISSAO 0.04
// sal�rio = 1190,00
// vendas = 450,00
// sal�rio final = 1208,00
int main(){
	float salario, vendas, comissao, salarioFinal;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o sal�rio do funcion�rio:");
	scanf("%f", &salario);
	printf("Informe o valor de suas vendas:");
	scanf("%f", &vendas);
	comissao=vendas*COMISSAO;
	salarioFinal=salario+comissao;
	printf("\nO Funcion�rio recebe uma comiss�o de: R$%.2f", comissao);
	printf("\nO sal�rio final � de: R$%.2f", salarioFinal);
	return 0;
}

