#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("   N�meros e Meses  \n\nInsira o n�mero no m�s: ");
    scanf("%d", &num);
    switch(num){
    	case 1:
    		printf("\nO n�mero digitado � Janeiro.\n");
    		break;
    	case 2:
    		printf("\nO n�mero digitado � Fevereiro.\n");
    		break;
    	case 3:
    		printf("\nO n�mero digitado � Mar�o.\n");
    		break;
    	case 4:
    		printf("\nO n�mero digitado � Abril.\n");
    		break;
    	case 5:
    		printf("\nO n�mero digitado � Maio.\n");
    		break;
    	case 6:
    		printf("\nO n�mero digitado � Junho.\n");
    		break;
    	case 7:
    		printf("\nO n�mero digitado � Julho.\n");
    		break;
    	case 8:
    		printf("\nO n�mero digitado � Agosto.");
    		break;
    	case 9:
    		printf("\nO n�mero digitado � Setembro.");
    		break;
    	case 10:
    		printf("\nO n�mero digitado � Outubro.");
    		break;
    	case 11:
    		printf("\nO n�mero digitado � Novembro.");
    		break;
    	case 12:
    		printf("\nO n�mero digitado � Dezembro.\n");
    		break;
    	default:
    		printf("N�o existe m�s com n�mero %d\n", num);
	}
	return 0;
}

