#include <stdio.h>
#include <locale.h>
int main(){
	float salario, totalSalario=0, mediaFilhos=0, mediaSal=0, maiorSal=0, salarioAcima=0, mediaSalAcima=0;
	int filhos, totalFilhos=0, nCidadao, v;
	setlocale(LC_ALL, "Portuguese");
	printf("  ### - - - - IBGE - - - - ###\n\n");
	printf("Informe quantos Cidadãos serão entrevistados: ");
	scanf("%d", &nCidadao);
	for(v=1;v<=nCidadao;v++){
		printf("\n%dª cidadão:\n", v);
		printf("Informe a quantidade de filhos: ");
		scanf("%d", &filhos);
		totalFilhos=totalFilhos+filhos;
		printf("Informe o seu salário: ");
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
	printf("\nMédia salarial: R$ %.2f", mediaSal);
	printf("\nMédia de filhos: %.2f", mediaFilhos);
	printf("\nMaior Salário: %.2f", maiorSal);
	printf("\nPercentual de pessoas com salário acima de R$ 3000,00: %.2f", mediaSalAcima);
	return 0;
}

