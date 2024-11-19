#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int the100[10], menor, posicao, i;
	printf("informe um valor inteiro: ");
	scanf("%d", &the100[0]);
	menor=the100[0];
	posicao=0;
	for(i=1;i<10;i++){
		printf("Informe um valor inteiro: ");
		scanf("%d", &the100[i]);
		if(the100[i]<menor){
			menor=the100[i];
			posicao=i;
		}
	}
	printf("O menor número é %d, na posição %d.", menor, posicao);
	return 0;
}
