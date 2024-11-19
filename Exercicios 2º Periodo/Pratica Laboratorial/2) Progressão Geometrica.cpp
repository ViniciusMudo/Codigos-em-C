#include <stdio.h>
#include <locale.h>
int main(){
	int inicial, razao, v;
	setlocale(LC_ALL, "Portuguese");
	printf(" ### - - - RAZÃO P.G. - - - ###\n\n"); // Geométrica
	printf("Informe o valor inicial:");
	scanf("%d", &inicial);
	printf("Informe o valor da razão entre os números:");
	scanf("%d", &razao);
	for (v=1; v<=10; v++){
		printf("\n%dª valor da sequência: %d", v, inicial);
		inicial=inicial*razao;
	}
	printf("\n\n       _ _ _ _ FIM DO PROGRAMA _ _ _ _\n\n");
	return 0;
}

