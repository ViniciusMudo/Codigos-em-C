#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define HAH 1000
int main(){
    setlocale(LC_ALL, "Portuguese");
    int op, i, numCN, numO, numH;
    float result;
    printf("\t###### IBGE ###### \n|====== Natalidade e Mortalidade ======|");
    printf("\n\n\t  (1)Natalidade\n\t  (2)Mortalidade\n\t  (3)Sair do Sistema\n\nEscolha a op��o desejada: ");
    scanf("%d", &op);
    system("cls");
    while(op!=3){
    	switch(op){
		    case 1:
		    	printf("Quantas crian�as nasceram?: \n");
		    	scanf("%d", &numCN);
		    	printf("Qual o n�mero de habitantes?: \n");
		    	scanf("%d", &numH);
		    	result=(numCN*HAH)/(float)numH;
		    	printf("\n|A Taxa de Natalidade dessa regi�o � de %.2f|\n", result);
    		    break;
    	    case 2:
			    printf("Quantas pessoas morreram?: \n");
		    	scanf("%d", &numO);
		    	printf("Qual o n�mero de habitantes?: \n");
		    	scanf("%d", &numH);
		    	result=(numO*HAH)/(float)numH;
		    	printf("\n|A Taxa de Mortalidade dessa regi�o � de %.2f|\n", result);   	    	
    		    break;
    		default:
    			printf("\nOp��o Inexistente.");
	    }
	    printf("\n################ MENU DE OP��ES ################\n\t \n\t  (1)Natalidade\n\t  (2)Mortalidade\n\t  (3)Sair do Sistema\n\nEscolha a op��o desejada: ");
	    scanf("%d", &op);
	    system("cls");
	}
	system("cls");
	printf("\nPROGRAMA FINALIZADO COM SUCESSO!!!\n");
	return 0;
}

