#include <stdio.h>
#include <locale.h>
int valorInteiro(int num){
	if(num>0)
		return 1;
	if(num<0)
		return -1;
	return 0;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, valor;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("O valor retornado: %d", valorInteiro(x));
	return 0;
}

