#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float preco;
    char i;
    printf("|###### PAINEL DE COMPRAS ######|\n\tTotal gasto:");
    scanf("%f", &preco);
    system("cls");
    fflush(stdin);
    printf("|######  INSIRA O CÓDIGO  ######|\n\n (1) Cliente Comum\n (2) Funcionário\n (3) Vip\n Código: ");
    scanf("%c", &i);
    system("cls");
    switch(i){
    	case '1':
    		printf("\nTotal pago pelo cliente: %.2f\n", preco);
    		break;
    	case '2':
    		printf("\nTotal pago pelo cliente: %.2f\n", preco-(preco*0.1));
    		break;
    	case '3':
    		printf("\nTotal pago pelo cliente: %.2f\n", preco-(preco*0.05));
    		break;
    	default:
    		printf("\nCódigo não reconhecido!!!\n");
	}
	return 0;
}

