#include <stdio.h>
#include <locale.h>
int main(){
	int x, y;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("Digite o primeiro número:");
	scanf("%d", &x);
	printf("Digite o segundo número:");
	scanf("%d", &y);
	if (x<y){
	   printf("\nO menor número:%d", x);
	}
	else {
	   printf("\nO menor número:%d", y);	
   }	
	return 0;
}
