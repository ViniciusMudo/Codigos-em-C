#include <stdio.h>
#include <locale.h> // Padaria
int main(){
	int paes, broas;
	float totalVenda, poupanca;
	setlocale(LC_ALL, "Portuguese");
	printf("    # # # - - - - PADARIA - - - - # # #\n\n");
	printf("Informe quantos pães foram vendidos:");
	scanf("%d", &paes);
	printf("Informe quantas broas foram vendidas:");
	scanf("%d", &broas);
	totalVenda=(paes*0.12)+(broas*1.50);
	poupanca=totalVenda*0.10;
	printf("\nTotal arrecado do dia: %.2f\nValor destinado a poupança:%.2f\n", totalVenda, poupanca);
	return 0;
}
