#include <stdio.h>
#include <locale.h>
#include <math.h> // usar fun��es matem�ticas

int main(){

	float base, altura, hipotenusa;
	setlocale(LC_ALL, "Portuguese");
	printf("####   CALCULE O VALOR DA HIPOTENUSA   ####\n\n");
	printf("Informe o tamanho da base do tri�ngulo: ");
	scanf("%f",&base);	
	printf("Informe a altura do tri�ngulo: ");
	scanf("%f",&altura);	
	hipotenusa=sqrt(pow(base, 2)+pow(altura, 2)); //   pow(x,y) potencia��o	 sqrt() achar a raiz quadrada
	printf("\nO valor da Hipotenusa � igual a: %.2f", hipotenusa);
	return 0;
}

