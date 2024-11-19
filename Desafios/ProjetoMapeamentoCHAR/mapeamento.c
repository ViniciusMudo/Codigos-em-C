#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mapeamento.h"


Map no_map(Chave c, Valor v, Map p){
	Map novo = (Map)malloc(sizeof(struct map));
	strcpy(novo->chave, c);
	strcpy(novo->valor, v);
	novo->prox = p;
	return novo; 
}

void inserir(Chave c, Valor v, Map *M){
	while(*M != NULL && strcmp((*M)->chave, c)){
		M = &(*M)->prox;
	}
	if( *M != NULL && strcmp((*M)->chave, c)){
		strcpy((*M)->valor, v);
	}else{
		*M = no_map(c, v, *M);
	}
}

void exibe(Map M){
	printf("[");
	while(M != NULL){
		printf("(%s : %s)",M->chave, M->valor);
		if(M->prox != NULL){
			printf(", ");
		}
		M = M->prox;
	}
	printf("]\n");
}

char remover(Chave c, Map *M){
	while(*M != NULL && strcmp((*M)->chave, c)){
		M = &(*M)->prox;
	}
	if(*M == NULL || strcmp((*M)->chave, c)){
		return 0;
	}else{
		Map aux = *M;
		*M = aux->prox;
		free(aux);
		return 1;
	}
}

char pertence(Chave c, Valor v, Map M){
	while(M != NULL && strcmp(M->chave, c)){
		M = M->prox;
	}
	if(M != NULL && strcmp(M->valor, v)){
		strcpy(v, M->valor);
		return 1;
	}else{
		return 0;
	}
}

void destroi(Map *M){
	Map aux;
	while(*M != NULL){
		aux = *M;
		*M = aux->prox;
		free(aux);
	}
}
