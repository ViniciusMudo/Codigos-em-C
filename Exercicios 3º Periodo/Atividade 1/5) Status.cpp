#include <stdio.h>
#include <locale.h>
#include <ctype.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char c;
    printf(" S = Solteiro\n C = Casado\n D = Divorciado\n\nDigite a letra que corresponde a seu status civil: ");
    scanf("%c", &c);
	c=toupper(c);    
    switch(c){
    	case 'S':
    		printf("\nEstado civil: Solteiro\n");
    		break;
    	case 'C':
    		printf("\nEstado civil: Casado\n");
    		break;
    	case 'D':
    		printf("\nEstado civil: Divorciado\n");
    		break;
    	default:
    		printf("\nEstado civil invalido.\n");
	}
	return 0;
}

