#include <stdio.h>
#include <stdlib.h>
#include <string.h>                        
#include "mapeamento.h"                    //QUESTAO 3

int main() {
	Valor num;
	Map I = no_map(1, 123, NULL);
	inserir(3, 555, &I);
	inserir(5, 513, &I);
	inserir(4, 176, &I);
	inserir(2, 453, &I);
	exibe(I);
	
	
	if(remover(2, &I)){
		printf("Chave removida\n");
	}else{
		printf("Chave inexistente\n");
	} 
	
	
	if(pertence(4, &num, I)){
		printf("Chave encontrada. O valor eh %d\n", num);
	}else{
		printf("Chave nao encontrada!\n");
	}
	
	
	exibe(I);
	destroi(&I);
	printf("Lista destruida.\n");
	exibe(I);
	return 0;
}
