#include <stdio.h>
#include <locale.h>
// A cada 1000 litros equivale a 2% do sal�rio m�ninmo
// Sal�rio m�nimo= R$1.416,00
// Quantidade de �gua normalmente gasta= 5.400
int main(){
	float salario, quantLitros, valorContaAgua, valorDesconto;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Informe o s�lario m�nimo: ");
	scanf("%f", &salario);
	printf("Informe a quantidade de �gua gasta por m�s em uma resid�ncia: ");
	scanf("%f", &quantLitros);
	valorContaAgua=(quantLitros/1000)*(salario*0.02);
	valorDesconto= valorContaAgua-(valorContaAgua*0.15);
	printf("\nO Valor da Conta de �gua � de: R$%.2f\nValor a ser pago com desconto de 15%%: R$%.2f", valorContaAgua, valorDesconto);
	return 0;
}

