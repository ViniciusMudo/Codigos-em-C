#include <stdio.h>
#include <locale.h>
#include <math.h>    // distancia de dois pontos
int main(){
	double x1, x2, y1, y2, distancia;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe os valores dos pontos X1 e Y1, respectivamente:");
	scanf("%lf %lf", &x1, &y1);
	printf("Informe os valores dos pontos X2 e Y2, respectivamente:");
	scanf("%lf %lf", &x2, &y2);
	distancia=sqrt(pow((x2-x1), 2)+pow((y2-y1), 2));
	printf("\nDistância calculada entre os dois pontos é de:%.4lf\n", distancia);
	return 0;
}
