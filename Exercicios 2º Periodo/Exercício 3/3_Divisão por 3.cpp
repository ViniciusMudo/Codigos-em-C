#include <stdio.h>
#include <locale.h>
int main(){
	int num;
	setlocale(LC_ALL, "Portuguese");
	printf("    # # # - - - DIVIS�O POR 3 - - - # # #\n\n");
	printf("Informe o n�mero:");
	scanf("%d", &num);
	if (num%3==0){
		printf("\n %d � divis�vel por 3.\n", num);
	}else{
		printf("\n Esse n�mero N�O � divis�vel por 3!!!\n");
	}
	return 0;
}

