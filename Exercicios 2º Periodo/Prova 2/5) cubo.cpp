#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int vetorA[4], vetorB[4];
    int i;
    for(i=0;i<5;i++){
    	printf("Digite um número para o vetorA: ");
    	scanf("%d", &vetorA[i]);
    	vetorB[i]=pow(vetorA[i], 3);
	}
	printf("\nVetorB: \n");
	for(i=0;i<5;i++){
		printf("%d ", vetorB[i]);
	}
	printf("\n");
	return 0;
}

