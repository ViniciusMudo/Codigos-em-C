#include <stdio.h>
#include <locale.h>
int main(){
	float salario, totalSalario=0, mediaFilhos=0, mediaSal=0, maiorSal=0, salarioAcima=0, mediaSalAcima=0;
	int filhos, totalFilhos=0, nCidadao, v;
	setlocale(LC_ALL, "Portuguese");
	printf("  ### - - - - IBGE - - - - ###\n\n");
	printf("Informe quantos Cidad�os ser�o entrevistados: ");
	scanf("%d", &nCidadao);
	for(v=1;v<=nCidadao;v++){
		printf("\n%d� cidad�o:\n", v);
		printf("Informe a quantidade de filhos: ");
		scanf("%d", &filhos);
		totalFilhos=totalFilhos+filhos;
		printf("Informe o seu sal�rio: ");
		scanf("%f", &salario);
		if(salario>0){
		    if(salario>maiorSal){
		   	    maiorSal=salario;
		   }		
		}	
		if(salario>3000){
			salarioAcima++;
		}
		totalSalario=totalFilhos+salario;
	}
	mediaFilhos=totalFilhos/nCidadao;
	mediaSal=totalSalario/nCidadao;
	mediaSalAcima=salarioAcima/nCidadao;
	printf("\nM�dia salarial: R$ %.2f", mediaSal);
	printf("\nM�dia de filhos: %.2f", mediaFilhos);
	printf("\nMaior Sal�rio: %.2f", maiorSal);
	printf("\nPercentual de pessoas com sal�rio acima de R$ 3000,00: %.2f", mediaSalAcima);
	return 0;
}

