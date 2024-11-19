#include <stdio.h>
#include <locale.h>
// Pra ter triângulo cada lado deve ser menor que a soma dos outros dois
// equi= 3=, esca= diferentes, iso= 2= 1!=

int main(){ // TRIÂNGULOS
	int lado1, lado2, lado3;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o comprimento dos três lados:");
	scanf("%d %d %d", &lado1, &lado2, &lado3);
	if(lado1<lado2+lado3 && lado2<lado1+lado3 && lado3<lado1+lado2){ // VERIFICAR SE É UM TRIÂNGULO
		printf("Os lados formam um triângulo.\n");
		if(lado1==lado2 && lado2==lado3){
			printf("\nEsse triângulo é EQUILÁTERO!!!"); // EQUILÁTERO
		}else{
			if(lado1!=lado2 && lado2!=lado3 && lado3!=lado1){ // ESCALENO
				printf("\nEsse triângulo é ESCALENO!!!");
			}else{
				printf("\nEsse triângulo é ISÓCELES!!!"); // ISÓCELES
			}
		}
	}else{
		printf("Os lados não formam um triângulo.\n");
	}
	return 0;	
}
