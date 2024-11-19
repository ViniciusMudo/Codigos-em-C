#include <stdio.h>
#include <locale.h>
int main(){
	float preco, precoNovo; 
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o preço do produto:");
	scanf("%f", &preco);
	precoNovo=preco-(preco*0.1); // tinha esquecido, mas não é uma "," e sim um ".".
	printf("\nNovo preço do produto com desconto de 10%%: R$ %.2f", precoNovo);
	return 0;
}

