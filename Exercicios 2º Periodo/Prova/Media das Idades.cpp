#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade, totalIdade=0, media, i=0; // tem que igualar a zero.
    do{
    	printf("Informe a idade: ");
    	scanf("%d", &idade);
    	if(idade==0){  
    		break;  // deve possuir o 'break', se deixar s� o 'while', ele completa a repeti��o at� o fim.
		}
    	totalIdade=totalIdade+idade;
		i++;
	}while(idade!=0);
	if(i!=0){
		media=totalIdade/i;
	    printf("\nM�dia da idades: %d", media);
	}else{
		printf("\nM�dia n�o poss�vel de c�lculo!!!\n");
	}
	return 0;
}
