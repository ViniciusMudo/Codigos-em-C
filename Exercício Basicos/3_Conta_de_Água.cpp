#include <stdio.h>
#include <locale.h>
// A cada 1000 litros equivale a 2% do salário míninmo
// Salário mínimo= R$1.416,00
// Quantidade de água normalmente gasta= 5.400
int main(){
	float salario, quantLitros, valorContaAgua, valorDesconto;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Informe o sálario mínimo: ");
	scanf("%f", &salario);
	printf("Informe a quantidade de água gasta por mês em uma residência: ");
	scanf("%f", &quantLitros);
	valorContaAgua=(quantLitros/1000)*(salario*0.02);
	valorDesconto= valorContaAgua-(valorContaAgua*0.15);
	printf("\nO Valor da Conta de água é de: R$%.2f\nValor a ser pago com desconto de 15%%: R$%.2f", valorContaAgua, valorDesconto);
	return 0;
}

