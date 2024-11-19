#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct ponto{
	float x, y;
};
typedef struct ponto Ponto;
int dentroRet(Ponto v1, Ponto v2, Ponto p){
	if(p.x > v1.x && p.x < v2.x && p.y > v1.y && p.x < v2.y){
		return 1;
	}else{
		return 0; 
	}
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    Ponto pto, vert1, vert2;
    int ret;
    printf("Informe as coordenadas do ponto a ser testado: ");
    scanf("%f %f", &pto.x, &pto.y);
    printf("Informe as coordenadas do canto inferior: ");
    scanf("%f %f", &vert1.x, &vert1.y);
    printf("Informe as coordenadas do canto superior: ");
    scanf("%f %f", &vert2.x, &vert2.y);
    ret=dentroRet(vert1, vert2, pto);
    if(ret==1){
    	printf("\nEstá dentro do retângulo\n");
	}else{
		printf("\nNÃO esta dentro do retângulo\n");
	}
	return 0;
}
