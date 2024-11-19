#include <stdio.h>
#include <locale.h>
int main(){
	int num;
	setlocale(LC_ALL, "Portuguese");
	printf("    # # # - - - DIVISÃO POR 3 - - - # # #\n\n");
	printf("Informe o número:");
	scanf("%d", &num);
	if (num%3==0){
		printf("\n %d é divisível por 3.\n", num);
	}else{
		printf("\n Esse número NÃO é divisível por 3!!!\n");
	}
	return 0;
}

