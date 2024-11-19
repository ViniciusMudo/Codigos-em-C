#include <stdio.h>
#include <locale.h>
int main(){
	float tempo, velMedia;
	double litros;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o tempo gasta na viagem em horas:");
	scanf("%f", &tempo);
	printf("Informe a velocidade média durante a viagem:");
	scanf("%f", &velMedia);
	litros=(tempo*velMedia)/12;
	printf("\nA quantidade de litros necessários para terminar a viagem seria de %.3lf.\n", litros);
	return 0;
}

