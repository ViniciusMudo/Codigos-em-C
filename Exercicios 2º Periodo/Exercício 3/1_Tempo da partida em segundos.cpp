#include <stdio.h>
#include <locale.h>
int main(){
	int tempo, hora, minuto, segundos, resto;
	setlocale(LC_ALL, "Portuguese");	
	printf("   ####==== DESCUBRA A DURAÇÃO DO EVENTO ====####\n");
	printf("Informe a duração da partida em segundos:");
	scanf("%d", &tempo);
	resto=tempo%3600;
	hora=tempo/3600;
	minuto=resto/60;
	segundos=resto%60;
	printf("\nA partida durou aproximadamente: %d:%d:%d\n", hora, minuto, segundos);
	return 0;
}
