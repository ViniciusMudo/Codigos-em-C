#include <stdio.h>
#include <locale.h>
int main(){
	int horasTrabalhadas, horasExtras;
	float valorHora, salario;
	setlocale(LC_ALL, "Portuguese");
	printf("  # # # - - - SÁLARIO SEMANAL - - - # # #\n\n");
	printf("Informe valor por hora trabalhada:");
	scanf("%f", &valorHora);
	printf("Informe o total de horas trabalhadas:");
	scanf("%d", &horasTrabalhadas);
	if (horasTrabalhadas<=40){
		salario=horasTrabalhadas*valorHora;
		printf("\nSalário semanal: R$ %.2f\n", salario);
	}
	if (horasTrabalhadas>40&&horasTrabalhadas<=60){
		horasExtras=horasTrabalhadas-40;
		salario=(horasTrabalhadas*valorHora)+(horasExtras*(valorHora*0.5));
		printf("\nSalário semanal com bônus de 50%%: R$%.2f\n", salario);
	}
	if (horasTrabalhadas>60){
		horasExtras=horasTrabalhadas-60;
		salario=(horasTrabalhadas*valorHora)+(horasExtras*valorHora);
		printf("\nSalário semanal com bônus de 100%%: R$%.2f\n", salario);
	}
	return 0;
}

