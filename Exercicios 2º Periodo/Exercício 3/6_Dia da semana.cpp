#include <stdio.h>
#include <locale.h>
int main(){
	int num;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - DIA DA SEMANA - - - # # #\n\n");
	printf("Digite um n�mero de 1 a 7:");
	scanf("%d", &num);
	switch(num){
		case 1:
			printf("\n  Hoje � DOMINGO.\n");
			break;
		case 2:
			printf("\n  Hoje � SEGUNDA.\n");
			break;
		case 3:
			printf("\n  Hoje � TER�A-FEIRA.\n");
			break;
		case 4:
			printf("\n  Hoje � QUARTA-FEIRA.\n");
			break;
		case 5:
			printf("\n  Hoje � QUINTA-FEIRA.\n");
			break;
		case 6:
			printf("\n  Hoje � SEXTA-FEIRA.\n");
			break;
		case 7:
			printf("\n  Hoje � S�BADO.\n");
			break;
		default:
			printf("\n  N�MERO INV�LIDO!!!\n");
	}
	return 0;
}

