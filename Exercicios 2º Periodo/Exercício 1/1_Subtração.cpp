#include <stdio.h>
#include <locale.h>
int main(){
	int x, y, r;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro número:");
	scanf("%d", &x);
	printf("Digite o segundo número:");
	scanf("%d", &y);
	r=x-y;
	printf("%d - %d = %d", x, y, r);
	return 0;
}
