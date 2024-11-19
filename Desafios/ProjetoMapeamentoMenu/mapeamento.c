#include <stdio.h>
#include <stdlib.h>
#include <string.h>              
#include "mapeamento.h"                      // QUESTÃO 2


Map no_map(Chave c, Valor v, Map p){
	Map novo = (Map)malloc(sizeof(struct map));
	novo->chave = c;
	strcpy(novo->valor, v);
	novo->prox = p;
	return novo; 
}

void inserir(Chave c, Valor v, Map *M){
	while(*M != NULL && (*M)->chave < c){
		M = &(*M)->prox;
	}
	if( *M != NULL && (*M)->chave == c){
		strcpy((*M)->valor, v);
	}else{
		*M = no_map(c, v, *M);
	}
}

void listar(Map M){
	printf("[");
	while(M != NULL){
		printf("(%d : %s)",M->chave, M->valor);
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

void destruir(Map *M){
	Map aux;
	while(*M != NULL){
		aux = *M;
		*M = aux->prox;
		free(aux);
	}
}

int procurar(Chave c, Valor v, Map M){
	while(M != NULL && M->chave < c){
		M = M->prox;
	}
	if(M != NULL && M->chave == c){
		strcpy(v, M->valor);
	}
	return(M != NULL && M->chave == c);
}
void menu(){
	printf("\tMENU DE MAPEAMENTO ESCOLAR\n==================\n");
	printf(" (C)riar\n");
	printf(" (I)nserir\n");  
	printf(" (R)emover\n");
	printf(" (P)rocurar\n");
	printf(" (L)istar\n");	
	printf(" (D)estruir\n");  
	printf(" (S)air\n==================\n");
}















