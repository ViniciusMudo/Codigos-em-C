#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mapeamento.h"                    //QUESTAO 3


Map no_map(Chave c, Valor v, Map p){
	Map novo = (Map)malloc(sizeof(struct map));
	novo->chave = c;
	novo->valor = v;
	novo->prox = p;
	return novo; 
}

void inserir(Chave c, Valor v, Map *M){
	while(*M != NULL && (*M)->chave < c){
		M = &(*M)->prox;
	}
	if( *M != NULL && (*M)->chave == c){
		(*M)->valor = v;
	}else{
		*M = no_map(c, v, *M);
	}
}

void exibe(Map M){
	printf("[");
	while(M != NULL){
		printf("(%d : %d)",M->chave, M->valor);
		if(M->prox != NULL){
			printf(", ");
		}
		M = M->prox;
	}
	printf("]\n");
}

int remover(Chave c, Map *M){
	while(*M != NULL && (*M)->chave < c){
		M = &(*M)->prox;
	}
	if(*M == NULL || (*M)->chave > c){
		return 0;
	}else{
		Map aux = *M;
		*M = aux->prox;
		free(aux);
		return 1;
	}
}

int pertence(Chave c, Valor* v, Map M){
	while(M != NULL && M->chave < c){
		M = M->prox;
	}
	if(M != NULL && M->chave == c){
		*v = M->valor;
	}
	return(M != NULL && M->chave == c);
}

void destroi(Map *M){
	Map aux;
	while(*M != NULL){
		aux = *M;
		*M = aux->prox;
		free(aux);
	}
}
