#include <stdio.h>
#include <locale.h>
int main(){
    int maior, n1, n2, n3, n4;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - MAIOR N�MERO - - - # # #\n\n");
	printf("Informe o 1� n�mero:");
	scanf("%d", &n1);
	printf("Informe o 2� n�mero:");
	scanf("%d", &n2);
	printf("Informe o 3� n�mero:");
	scanf("%d", &n3);
	printf("Informe o 4� n�mero:");
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
	printf("\nO maior n�mero �: %d\n", maior);
	return 0;
}

