#include <stdio.h>
#include <locale.h> // ok, � assim que faz pra ter acento.

int main(){
	int x, y, z, r;
	setlocale(LC_ALL,"Portuguese"); // setlocale, adaptar a linguagem, LC_ALL, se conecta a todas as linguagens, depois � s� invocar a desejada entre aspas.  
	printf("Digite o primeiro n�mero:");
	scanf("%d", &x);
	printf("Digite o segundo n�mero:");
	scanf("%d", &y);
	printf("Digite o terceiro n�mero:");
	scanf("%d", &z);	
	r=x*y*z;
	printf("\nO Resultado da multiplica��o � de:%d", r);
	return 0;
}

