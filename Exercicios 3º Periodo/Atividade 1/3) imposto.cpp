#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float salario, imposto;
    int cont=0;
	while(cont==0){
		printf("Informe o seu sal�rio (apenas n�meros!!!): ");
	    scanf("%f", &salario);
        if(salario<=0){
		    printf("Sal�rio Inv�lido!!!\n\n");
	    }else{
		    if(salario>=1000.00){
			    imposto=salario*0.1;
		    }else{
			    imposto=salario*0.05;
		    }
		    cont=1;
        }
    } 
    printf("Imposto a pagar: %.2f", imposto);
	return 0;
}

