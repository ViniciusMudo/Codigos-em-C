#include <stdio.h>
#include <locale.h>  // Biblioteca de Linguagens
#include <math.h> // Bibliotecas de fun��es matem�ticas
int main(){
	float catX, catY, catH;
	setlocale(LC_ALL, "PORTUGUESE"); // setlocale, adaptar a linguagem, LC_ALL, se conecta a todas as linguagens, depois � s� invocar a desejada entre aspas.  
	scanf("%f", &catX);
	scanf("%f", &catY);
	catH=sqrt(pow(catX, 2)+pow(catY, 2)); //   pow(x,y) potencia��o	 sqrt() achar a raiz quadrada
	printf("%.2f", catH);
	return 0;
}

