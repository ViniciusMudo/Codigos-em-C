#include <stdio.h>
#include <locale.h>
int main(){
	float custo, custoFinal, percentual;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - PRE�O DO PRODUTO - - - # # #\n\n");
	printf("Informe o custo do produto:");
	scanf("%f", &custo);
	printf("Digite o percentual a ser cobrado do produto:");
	scanf("%f", &percentual);
	custoFinal=custo+(custo*(percentual/100));
	printf("\nO pre�o final com o acr�scimo de %.0f%% � de R$ %.2f.\n", percentual, custoFinal);
	return 0;
}

