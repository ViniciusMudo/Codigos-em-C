#include <stdio.h>
#include <locale.h>
// espet�culo = R$ 1460,00
// ingresso = R$ 20,00
// quantidade necess�rias = 73
int main(){
	float precoEspetaculo, precoIngresso;
	int quantIngressos;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o custo total do Espet�culo:");
	scanf("%f", &precoEspetaculo);
	printf("Informe o valor do ingresso:");
	scanf("%f", &precoIngresso);
	quantIngressos= precoEspetaculo/precoIngresso; 
	printf("\nQuantidade de ingressos necess�rios para pagar o Espet�culo:%d", quantIngressos);
	return 0;
}

