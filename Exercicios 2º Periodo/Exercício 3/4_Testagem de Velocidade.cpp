#include <stdio.h>
#include <locale.h>
int main(){
	int velMaxima, velMotorista, velMulta;
	float multa;
	setlocale(LC_ALL, "Portuguese");
	printf("   # # # - - - TESTAGEM DE VELOCIDADE - - - # # #\n\n");
	printf("Informe a velocidade da avenida:");
	scanf("%d", &velMaxima);
	printf("Informe a velocidade do motorista:");
	scanf("%d", &velMotorista);
	velMulta=velMotorista-velMaxima;
	if(velMulta>1){
		multa=velMulta*5;
		printf("\n Motorista multado em R$ %.2f.\n_______________________________\n", multa);
	}else{
		printf("\n Motorista consciente.\n_______________________________\n");
	}
	return 0;
}
