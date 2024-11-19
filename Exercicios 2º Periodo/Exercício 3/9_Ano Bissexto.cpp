#include <stdio.h>
#include <locale.h>
int main(){
	int ano;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - IDENTIFICADOR DE BISSEXTOS - - - # # #\n\n");
	printf("Informe o ano desejado:");
	scanf("%d", &ano);
	if((ano%4==0&&ano%100!=0)||(ano%400==0)){
		printf("\nEsse ano é bissexto.\n");
	}else{
		printf("\nEsse ano NÃO é bissexto.\n");
	}
	return 0;
}
