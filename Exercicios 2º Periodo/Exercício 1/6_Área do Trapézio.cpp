#include <stdio.h>
#include <locale.h>
//Área do trapézio
int main(){
	float baseMaior, baseMenor, altura, area;
	setlocale(LC_ALL, "Portuguese");
	printf("####### CALCULANDO ÁREA DE UM TRAPÉZIO #######\n\n");
	printf("Informe o tamanho da Base Maior:"); 
	scanf("%f", &baseMaior);
	printf("Informe o tamanho da Base Menor:"); 
	scanf("%f", &baseMenor);
	printf("Informe a Altura:");  
	scanf("%f", &altura);
	area=((baseMaior+baseMenor)*altura)/2; 
	printf("\n  A ÁREA DESSE TRAPÉZIO VALE: %.2f  ", area);
	return 0;
}

