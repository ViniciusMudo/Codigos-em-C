#include <stdio.h>
#include <locale.h>
float velMedia(float dist, int h){
	return (float)dist/h;
}	
int main(){
    setlocale(LC_ALL, "Portuguese");
    int hora;
	float km, velocidade;
    printf("Informe a dist�ncia percorida em KM: ");
    scanf("%f", &km);
    printf("Informe a hora total da viagem: ");
    scanf("%d", &hora);
    velocidade=velMedia(km, hora);
    printf("Velocidade m�dia: %.1f km/h", velocidade);
	return 0;
}
