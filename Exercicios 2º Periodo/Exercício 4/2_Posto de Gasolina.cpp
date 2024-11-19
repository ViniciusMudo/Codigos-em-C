#include <stdio.h>
#include <locale.h>
int main(){
    float pagamento, litroGas, precoLitro;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - POSTO DE GASOLINA - - - # # #\n\n");
	printf("Informe quantos reais o cliente colocou:");
	scanf("%f", &pagamento);
	printf("Informe o preço da gasolina:");
	scanf("%f", &precoLitro);
	litroGas=pagamento/precoLitro;
	printf("\nO cliente conseguiu colocar %.2f litros de gasolina.", litroGas);
	return 0;
}

