#include <stdio.h>
#include <locale.h>
int main(){
    int maior, n1, n2, n3, n4;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - MAIOR NÚMERO - - - # # #\n\n");
	printf("Informe o 1ª número:");
	scanf("%d", &n1);
	printf("Informe o 2ª número:");
	scanf("%d", &n2);
	printf("Informe o 3ª número:");
	scanf("%d", &n3);
	printf("Informe o 4ª número:");
	scanf("%d", &n4);
	maior=n1;
	if(n2>maior){
		maior=n2;
	}
	if(n3>maior){
		maior=n3;
	}
	if(n4>maior){
		maior=n4;
	}
	printf("\nO maior número é: %d\n", maior);
	return 0;
}

