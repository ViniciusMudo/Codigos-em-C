#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    if(num>0){
    	printf("\nEsse � n�mero N�O � 0.\n");
	}else{
		printf("\nEsse � n�mero � 0.\n");
	}
	return 0;
}

