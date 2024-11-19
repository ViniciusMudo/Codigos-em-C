#include <stdio.h>
#include <locale.h>
// espetáculo = R$ 1460,00
// ingresso = R$ 20,00
// quantidade necessárias = 73
int main(){
	float precoEspetaculo, precoIngresso;
	int quantIngressos;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o custo total do Espetáculo:");
	scanf("%f", &precoEspetaculo);
	printf("Informe o valor do ingresso:");
	scanf("%f", &precoIngresso);
	quantIngressos= precoEspetaculo/precoIngresso; 
	printf("\nQuantidade de ingressos necessários para pagar o Espetáculo:%d", quantIngressos);
	return 0;
}

