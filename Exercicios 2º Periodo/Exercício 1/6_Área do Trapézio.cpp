#include <stdio.h>
#include <locale.h>
//�rea do trap�zio
int main(){
	float baseMaior, baseMenor, altura, area;
	setlocale(LC_ALL, "Portuguese");
	printf("####### CALCULANDO �REA DE UM TRAP�ZIO #######\n\n");
	printf("Informe o tamanho da Base Maior:"); 
	scanf("%f", &baseMaior);
	printf("Informe o tamanho da Base Menor:"); 
	scanf("%f", &baseMenor);
	printf("Informe a Altura:");  
	scanf("%f", &altura);
	area=((baseMaior+baseMenor)*altura)/2; 
	printf("\n  A �REA DESSE TRAP�ZIO VALE: %.2f  ", area);
	return 0;
}

