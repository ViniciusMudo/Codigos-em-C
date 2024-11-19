#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, bin=0, resto, i=0;
    printf("Informe um valor inteiro: ");
    scanf("%d", &n); // 6
    while(n!=0){
		resto=n%2;               
    	bin=bin+resto*pow(10, i);
    	printf("%d   %d   %d   %d\n", n, resto, i, bin);
		i++;                    
    	n=n/2;               
	}
	printf("Valor binário: %d", bin); //110 
	return 0;
}

