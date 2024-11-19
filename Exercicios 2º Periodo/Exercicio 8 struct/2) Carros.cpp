#include <stdio.h>
#include <locale.h>
#define C 4
struct carros{
	char marca[50];
	char modelo[50];
	int ano;
	float preco;
};
int main(){
    setlocale(LC_ALL, "Portuguese");
    carros dados[C];
    int i;
    printf("\tREGISTRO\n");
	for(i=0;i<C;i++){
    	printf("\n%dº CARRO\n\n", i+1);
		printf("Marca: ");
    	scanf("%s", dados[i].marca);
    	printf("Modelo: ");
    	scanf("%s", dados[i].modelo);
    	printf("Ano: ");
    	scanf("%d", &dados[i].ano);
    	printf("Preço: ");
    	scanf("%f", &dados[i].preco);
	}
	printf("\n\n\tINFORMAÇÕES\n\n");
	printf("Marca");
	for(i=0;i<C;i++){
		printf("  |%s| ", dados[i].marca);
	}
	printf("\nModelo");
	for(i=0;i<C;i++){
		printf("  |%s| ", dados[i].modelo);
	}
	printf("\nAno");
	for(i=0;i<C;i++){
		printf("  |%d| ", dados[i].ano);
	}
	printf("\nPreço");
	for(i=0;i<C;i++){
		printf("  |%.2f| ", dados[i].preco);
	}	
	return 0;
}
