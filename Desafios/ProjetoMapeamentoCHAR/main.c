#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mapeamento.h"

int main() {
	Valor x;
	Map I = no_map("Quente", "Agua", NULL);
	inserir("Gelado", "Terra", &I);
	inserir("Fruta", "Abacate", &I);
	inserir("Escola", "Existe", &I);
	inserir("Sentido", "Olhos", &I);
	exibe(I);
	
	if(remover("Gelado", &I)){
		printf("Chave removida\n");
	}else{
		printf("Chave inexistente\n");
	} 
	
	if(pertence("Escola", x, I)){
		printf("Chave encontrada. O valor eh %s\n", x);
	}else{
		printf("Chave nao encontrada!\n");
	}
	exibe(I);
	destroi(&I);
	exibe(I);
	return 0;
}
