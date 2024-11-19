#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if(num>0){
    	printf("\nEsse é número NÃO é 0.\n");
	}else{
		printf("\nEsse é número é 0.\n");
	}
	return 0;
}

