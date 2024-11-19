#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num[19], i, pares=0;
    for(i=0;i<=19;i++){
    	printf("Digite um número inteiro: ");
    	scanf("%d", &num[i]);
    	if(num[i]%2==0){
    		pares++;
		}
	}
	printf("\n\nContagem total de pares no vetor: %d\n", pares);
	return 0;
}

