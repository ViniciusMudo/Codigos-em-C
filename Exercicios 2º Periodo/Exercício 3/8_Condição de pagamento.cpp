#include <stdio.h>
#include <locale.h>
int main(){
	float precoNormal, precoFinal;
	int codigo;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - CONDIÇÃO DE PAGAMENTO - - - # # #\n\n");
	printf("Informe o preço da etiquta do produto:");
	scanf("%f", &precoNormal);
	printf("\n |1| À vista em dinheiro ou cheque, recebe 10%% de desconto");
	printf("\n |2| À vista no cartão de crédito, recebe 15%% de desconto");
	printf("\n |3| Em duas vezes, preço normal de etiqueta sem juros");
	printf("\n |4| Em duas vezes, preço normal de etiquta mais juros de 10%%");
	printf("\n\nInforme o código de condição para o pagamento de 1 a 4: ");
	scanf("%d", &codigo);
	switch(codigo){
		case 1:
			precoFinal=precoNormal-(precoNormal*0.1);
			printf("\nPreço final do produto com 10%% de desconto: R$%.2f\n", precoFinal);
	 	    break;
		case 2:
			precoFinal=precoNormal-(precoNormal*0.15);
			printf("\nPreço final do produto com 15%% de desconto: R$%.2f\n", precoFinal);
			break;
		case 3:
			precoFinal=precoNormal/2;
			printf("\nPreço final de R$%.2f dividido em 2x de R$%.2f\n", precoNormal, precoFinal);
			break;
		case 4:
			precoFinal=precoNormal+(precoNormal*0.1);
			printf("\nPreço final com juros de 10%% R$%.2f dividido em 2x de R$%.2f\n", precoFinal, precoFinal/2);
			break;
	}
	return 0;
}
