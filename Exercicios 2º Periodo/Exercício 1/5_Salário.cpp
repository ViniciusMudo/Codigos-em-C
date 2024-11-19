#include <stdio.h>
#include <locale.h>
#define COMISSAO 0.04
// salário = 1190,00
// vendas = 450,00
// salário final = 1208,00
int main(){
	float salario, vendas, comissao, salarioFinal;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o salário do funcionário:");
	scanf("%f", &salario);
	printf("Informe o valor de suas vendas:");
	scanf("%f", &vendas);
	comissao=vendas*COMISSAO;
	salarioFinal=salario+comissao;
	printf("\nO Funcionário recebe uma comissão de: R$%.2f", comissao);
	printf("\nO salário final é de: R$%.2f", salarioFinal);
	return 0;
}

