#include <stdio.h>
#include <locale.h>
// Pra ter tri�ngulo cada lado deve ser menor que a soma dos outros dois
// equi= 3=, esca= diferentes, iso= 2= 1!=

int main(){ // TRI�NGULOS
	int lado1, lado2, lado3;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o comprimento dos tr�s lados:");
	scanf("%d %d %d", &lado1, &lado2, &lado3);
	if(lado1<lado2+lado3 && lado2<lado1+lado3 && lado3<lado1+lado2){ // VERIFICAR SE � UM TRI�NGULO
		printf("Os lados formam um tri�ngulo.\n");
		if(lado1==lado2 && lado2==lado3){
			printf("\nEsse tri�ngulo � EQUIL�TERO!!!"); // EQUIL�TERO
		}else{
			if(lado1!=lado2 && lado2!=lado3 && lado3!=lado1){ // ESCALENO
				printf("\nEsse tri�ngulo � ESCALENO!!!");
			}else{
				printf("\nEsse tri�ngulo � IS�CELES!!!"); // IS�CELES
			}
		}
	}else{
		printf("Os lados n�o formam um tri�ngulo.\n");
	}
	return 0;	
}
