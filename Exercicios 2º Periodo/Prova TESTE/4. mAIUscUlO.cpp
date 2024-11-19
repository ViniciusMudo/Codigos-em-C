#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
void vogalzao(char frase[]){
	int i;
	for(i=0;i<strlen(frase);i++){
		if(frase[i]=='A' || frase[i]=='E' || frase[i]=='I' || frase[i]=='O' || frase[i]=='U'){
			frase[i]=tolower(frase[i]);
		}
	}
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    char f[100];
    printf("Digite uma frase: ");
    //scanf("%[^\n]s", f);
    gets(f); // as duas maneiras estão certas;
    vogalzao(f);
    printf("\n%s\n", f);
	return 0;
}
