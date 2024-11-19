#include <stdio.h>
#include <locale.h>
int main(){
	float custo, custoFinal, percentual;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - PREÇO DO PRODUTO - - - # # #\n\n");
	printf("Informe o custo do produto:");
	scanf("%f", &custo);
	printf("Digite o percentual a ser cobrado do produto:");
	scanf("%f", &percentual);
	custoFinal=custo+(custo*(percentual/100));
	printf("\nO preço final com o acréscimo de %.0f%% é de R$ %.2f.\n", percentual, custoFinal);
	return 0;
}

