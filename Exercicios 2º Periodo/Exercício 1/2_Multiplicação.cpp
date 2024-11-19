#include <stdio.h>
#include <locale.h> // ok, é assim que faz pra ter acento.

int main(){
	int x, y, z, r;
	setlocale(LC_ALL,"Portuguese"); // setlocale, adaptar a linguagem, LC_ALL, se conecta a todas as linguagens, depois é só invocar a desejada entre aspas.  
	printf("Digite o primeiro número:");
	scanf("%d", &x);
	printf("Digite o segundo número:");
	scanf("%d", &y);
	printf("Digite o terceiro número:");
	scanf("%d", &z);	
	r=x*y*z;
	printf("\nO Resultado da multiplicação é de:%d", r);
	return 0;
}

