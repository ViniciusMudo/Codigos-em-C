#include <stdio.h>
#include <locale.h>
int main(){
	float preco, precoNovo; 
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o pre�o do produto:");
	scanf("%f", &preco);
	precoNovo=preco-(preco*0.1); // tinha esquecido, mas n�o � uma "," e sim um ".".
	printf("\nNovo pre�o do produto com desconto de 10%%: R$ %.2f", precoNovo);
	return 0;
}

