#include <stdio.h>
#include <locale.h>
int main(){
	int x, y;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("Digite o primeiro n�mero:");
	scanf("%d", &x);
	printf("Digite o segundo n�mero:");
	scanf("%d", &y);
	if (x<y){
	   printf("\nO menor n�mero:%d", x);
	}
	else {
	   printf("\nO menor n�mero:%d", y);	
   }	
	return 0;
}
