#include <stdio.h>
#include <locale.h>
int main(){
	int num;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - DIA DA SEMANA - - - # # #\n\n");
	printf("Digite um número de 1 a 7:");
	scanf("%d", &num);
	switch(num){
		case 1:
			printf("\n  Hoje é DOMINGO.\n");
			break;
		case 2:
			printf("\n  Hoje é SEGUNDA.\n");
			break;
		case 3:
			printf("\n  Hoje é TERÇA-FEIRA.\n");
			break;
		case 4:
			printf("\n  Hoje é QUARTA-FEIRA.\n");
			break;
		case 5:
			printf("\n  Hoje é QUINTA-FEIRA.\n");
			break;
		case 6:
			printf("\n  Hoje é SEXTA-FEIRA.\n");
			break;
		case 7:
			printf("\n  Hoje é SÁBADO.\n");
			break;
		default:
			printf("\n  NÚMERO INVÁLIDO!!!\n");
	}
	return 0;
}

