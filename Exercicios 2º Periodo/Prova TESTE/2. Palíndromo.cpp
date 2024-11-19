#include <stdio.h>
#include <string.h>
#include <locale.h>
int palin(char pal[]){ // caca
	char inv[25], n;
	int i=0, p=0, r=0;
	n=strlen(pal); // caca 4
    i=n-1; // 3
	r=i;   // 3
	while(i>=0 && p<=r){ // 3>=0 e 0<=3
		inv[p]=pal[i]; // invertida[0]=palavra[3]; 
		i--;
		p++;
	}
	if(strstr(inv, pal)){
		return 1;
	}else{
		return 0;
	}
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    char palavra[25];
    int ret=0;
    printf("Informe uma palavra: ");
    scanf("%s", palavra);
    ret=palin(palavra);
    if(ret==1){
    	printf("\nÉ Palíndromo.\n");
	}else{
		printf("\nNÃO é Palíndromo.\n");
	}
	return 0;
}
