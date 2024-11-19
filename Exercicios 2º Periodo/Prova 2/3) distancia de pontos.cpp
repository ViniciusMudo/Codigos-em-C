#include <stdio.h>
#include <locale.h>
#include <math.h>
// dist=sqrt((pow(xb-xa),2)+(pow(yb-ya),2);
typedef struct ponto Ponto;
struct ponto{
	float x;
	float y;
};
float distancia(struct ponto *p1, struct ponto *p2){
	float dist;
	dist=sqrt((pow(*p2->x-*p1->x),2)+(pow(*p2->y-*p1->y),2));
	return dist;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    Ponto p1, p2;
    float ret;
    printf("Ponto 1: ");
    scanf("%f %f", p1.x, p1.y);
    printf("\nPonto 2: ");
    scanf("%f %f", p2.x, p2.y);
    ret=distancia(p1, p2);
    printf("\nA distancia do ponto 1 para o 2 é: %.2f", ret);
	return 0;
}
