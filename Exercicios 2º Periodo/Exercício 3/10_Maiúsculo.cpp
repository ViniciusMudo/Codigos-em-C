#include <stdio.h>
#include <locale.h>
#include <ctype.h> // biblioteca de strings
int main(){
	char c;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe um caracter:");
	scanf("%c", &c); 
	c=toupper(c); // mai�sculo
	printf("\nLetra digitada: %c\n", c);
	return 0;
}
