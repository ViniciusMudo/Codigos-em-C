#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("   Números e Meses  \n\nInsira o número no mês: ");
    scanf("%d", &num);
    switch(num){
    	case 1:
    		printf("\nO número digitado é Janeiro.\n");
    		break;
    	case 2:
    		printf("\nO número digitado é Fevereiro.\n");
    		break;
    	case 3:
    		printf("\nO número digitado é Março.\n");
    		break;
    	case 4:
    		printf("\nO número digitado é Abril.\n");
    		break;
    	case 5:
    		printf("\nO número digitado é Maio.\n");
    		break;
    	case 6:
    		printf("\nO número digitado é Junho.\n");
    		break;
    	case 7:
    		printf("\nO número digitado é Julho.\n");
    		break;
    	case 8:
    		printf("\nO número digitado é Agosto.");
    		break;
    	case 9:
    		printf("\nO número digitado é Setembro.");
    		break;
    	case 10:
    		printf("\nO número digitado é Outubro.");
    		break;
    	case 11:
    		printf("\nO número digitado é Novembro.");
    		break;
    	case 12:
    		printf("\nO número digitado é Dezembro.\n");
    		break;
    	default:
    		printf("Não existe mês com número %d\n", num);
	}
	return 0;
}

