#include <stdio.h>
#include <locale.h>
int main(){
	float precoNormal, precoFinal;
	int codigo;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - CONDI��O DE PAGAMENTO - - - # # #\n\n");
	printf("Informe o pre�o da etiquta do produto:");
	scanf("%f", &precoNormal);
	printf("\n |1| � vista em dinheiro ou cheque, recebe 10%% de desconto");
	printf("\n |2| � vista no cart�o de cr�dito, recebe 15%% de desconto");
	printf("\n |3| Em duas vezes, pre�o normal de etiqueta sem juros");
	printf("\n |4| Em duas vezes, pre�o normal de etiquta mais juros de 10%%");
	printf("\n\nInforme o c�digo de condi��o para o pagamento de 1 a 4: ");
	scanf("%d", &codigo);
	switch(codigo){
		case 1:
			precoFinal=precoNormal-(precoNormal*0.1);
			printf("\nPre�o final do produto com 10%% de desconto: R$%.2f\n", precoFinal);
	 	    break;
		case 2:
			precoFinal=precoNormal-(precoNormal*0.15);
			printf("\nPre�o final do produto com 15%% de desconto: R$%.2f\n", precoFinal);
			break;
		case 3:
			precoFinal=precoNormal/2;
			printf("\nPre�o final de R$%.2f dividido em 2x de R$%.2f\n", precoNormal, precoFinal);
			break;
		case 4:
			precoFinal=precoNormal+(precoNormal*0.1);
			printf("\nPre�o final com juros de 10%% R$%.2f dividido em 2x de R$%.2f\n", precoFinal, precoFinal/2);
			break;
	}
	return 0;
}
