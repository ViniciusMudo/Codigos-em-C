#include <stdio.h>
#include <locale.h>  // Biblioteca de Linguagens
#include <math.h> // Bibliotecas de funções matemáticas
int main(){
	float catX, catY, catH;
	setlocale(LC_ALL, "PORTUGUESE"); // setlocale, adaptar a linguagem, LC_ALL, se conecta a todas as linguagens, depois é só invocar a desejada entre aspas.  
	scanf("%f", &catX);
	scanf("%f", &catY);
	catH=sqrt(pow(catX, 2)+pow(catY, 2)); //   pow(x,y) potenciação	 sqrt() achar a raiz quadrada
	printf("%.2f", catH);
	return 0;
}

