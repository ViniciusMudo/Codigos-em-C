#include <stdio.h>
#include <locale.h>
#define TOTAL 5
struct aluno{
	char nome[50];
	float media;
};
int main(){
    setlocale(LC_ALL, "Portuguese");
    aluno dados[TOTAL];
    int i;
    float maiorMedia=0.0;
    char melhorAluno[50];
;	for(i=0;i<TOTAL;i++){
		printf("Informe o nome do aluno: ");
        scanf("%s", dados[i].nome);
        printf("Informe a média do aluno: ");
        scanf("%f", &dados[i].media);
        if(dados[i].media>maiorMedia){
        	maiorMedia=dados[i].media;
        	melhorAluno=dados[i].nome;
		}
	}
	for(i=0;i<TOTAL;i++){
		printf("Nome: %s\nMédia: %f\n", dados[i].nome, dados[i].media);
	}	
	printf("\nAluno com a maior média: %c", melhorAluno);
	return 0;
}

