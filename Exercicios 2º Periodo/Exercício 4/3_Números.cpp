#include <stdio.h>
#include <locale.h>
int main(){
	int num;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - N�MEROS 0 - 100 - - - # # #\n\n");
	printf("Informe um n�mero entre 0 e 100: ");
	scanf("%d", &num);
	if(num>=0&&num<=25){
		printf("\n%d est� entre 0-25.\n", num);
	}
	if(num>=26&&num<=50){
		printf("\n%d est� entre 26-50.\n", num);
	}
	if(num>=51&&num<=75){
		printf("\n%d est� entre 51-75.\n", num);
	}
	if(num>=76&&num<=100){
		printf("\n%d est� entre 76-100.\n", num);
	}
	if(num<0||num>100){
		printf("\n%d n�o est� entre 0-100.\n", num);
	}
	return 0;
}
