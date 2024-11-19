#include <stdio.h>
#include <locale.h>

int main(){
	int a, b, falsoA, falsoB;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Digite o valor de A:");
	scanf("%d", &a);
	printf("Digite o valor de B:");
	scanf("%d", &b);
	falsoA=a;
	falsoB=b;
	a=falsoB;
	b=falsoA;
	printf("Valor de A:%d\nValor de B:%d", a, b);
	return 0;
}

