#include <stdio.h>
#include <locale.h>
int main(){
	int inicial, razao, v;
	setlocale(LC_ALL, "Portuguese");
	printf(" ### - - - RAZ�O P.G. - - - ###\n\n"); // Geom�trica
	printf("Informe o valor inicial:");
	scanf("%d", &inicial);
	printf("Informe o valor da raz�o entre os n�meros:");
	scanf("%d", &razao);
	for (v=1; v<=10; v++){
		printf("\n%d� valor da sequ�ncia: %d", v, inicial);
		inicial=inicial*razao;
	}
	printf("\n\n       _ _ _ _ FIM DO PROGRAMA _ _ _ _\n\n");
	return 0;
}

