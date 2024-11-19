#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>                          // QUESTÃO 2
#include "mapeamento.h"

int main(){
	setlocale(LC_ALL, "Portuguese");
	Chave mat;
	Valor nome;
	char op;
	char r[1];
	while(op!='S'){
		menu();
		printf("\nOpção selecionada: ");
		fflush(stdin);
		scanf("%c", &op);
    	op=toupper(op);
		switch(op){
		    case 'C':
		    	system("cls");
		    	printf("   CRIANDO MAPEAMENTO:\n\n");
			    printf("Digite uma matrícula: ");
			    scanf("%d", &mat);
			    printf("Digite um nome de aluno: ");
			    scanf("%s", nome);
			    Map I =no_map(mat, nome, NULL);
			    printf("\nLista criada com sucesso!!!\n\n");
			    break;
			case 'I':
				system("cls");
				printf("   INSERINDO:\n\n");
				while(mat != -1){
				    printf("\nDigite uma matrícula ou digite '-1' para retornar ao menu: ");
		    	    scanf("%d", &mat);
		    	    if(mat != -1){
					    printf("Digite um nome de aluno: ");
			            scanf("%s", nome);
			            inserir(mat, nome, &I);		
					}
				} 
				system("cls");
			    printf("\nAluno(s) inserido com sucesso!!!\n\n");
			    break;
			case 'R':
				system("cls");
				printf("   REMOVENDO:\n\nLISTA: ");
				if(I != NULL){
				    listar(I);
				    printf("\n");
    				printf("Digite a matrícula a ser removida: ");
				    scanf("%d", &mat);
				    if(remover(mat, &I)){
				    	printf("\nMatrícula removida com sucesso!!!\n\n");
					}else{
						printf("\nMatrícula não encontrada para remoção.\n\n");
					}
			    }else{
				    printf("Lista vazia, impossibilitado de remoções.\n\n");
			    }
				break;
			case 'P':
				system("cls");
				printf("   PROCURAR: \n\n");
				printf("Digite qual matrícula deseja procurar: ");
				scanf("%d", &mat);
				if(procurar(mat, nome, I)){
					printf("\nMatrícula encontrada. Nome do aluno: %s\n\n", nome);
				}else{
					printf("\nMatrícula desconhecida.\n\n");
			    }
				break;
		    case 'L':
		    	system("cls");
		    	printf("   \nLISTA: ");
				if(I != NULL){
				    listar(I);
				    printf("\n");
			    }else{
				    printf("Lista vazia ou inexistente.\n\n");
				}   
				break;
			case 'D':
				system("cls");
				while(1){
    				printf("Tem certeza que deseja destruir lista atual? [y][n]?");
					scanf("%s", &r);
					if(r[0] == 'y'){
						if(I != NULL){
							destruir(&I);
							printf("\nLista Destruída...\n\n");
				    	}else{
							printf("\nNenhuma lista encontrada para ser destruida.\n\n");
				    	}
				    	break;
			    	}else if(r[0] == 'n'){
			    		system("cls");
			    		break;
					}else{
						system("cls");
						printf("Resposta inválida, por favor digite [y] ou [n].\n");
					}
				}
				break;
			default:
				system("cls");
				printf("\n   ==[OPÇÃO INVÁLIDA]==\n\n");
				break;
        }
	} 
	system("cls");
	printf("\n\tPrograma fechado com sucesso!\n");
	return 0;	
}
