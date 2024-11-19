#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float salario, imposto;
    int i;
    char status[81];
    printf("Digite o seu salário: ");
    scanf("%f", &salario);
    printf("Informe o seu estado civil: ");
    scanf("%s", status);
    for(i=0;i<strlen(status);i++){
    	status[i]=toupper(status[i]);
	}
	if(strstr(status,"CASADO") || strstr(status, "CASADA")){
		imposto=salario*0.05;
		printf("\nSalario: %.2f\nTaxa de imposto igual a: %.2f\n", salario, imposto);
	}else if(strstr(status,"SOLTEIRO") || strstr(status, "SOLTEIRA")){
		imposto=salario*0.10;
		printf("\nSalario: %.2f\nTaxa de imposto igual a: %.2f\n", salario, imposto);
	}else{
		printf("\nEstado Civil inválido.\n");
	}

	return 0;
}

