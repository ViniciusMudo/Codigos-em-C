#include <stdio.h>
#include <stdlib.h>  
#include <string.h>  // bibliotrca que permite usar a concatenação 
#include <locale.h>  // biblioteca que permite utilizar setlocale, para possuir uma linguagem especifica
#include <stdbool.h> // inclui a biblioteca usar o tipo de dado bool (booleano)
#define MAX 100

// Complexidade do Código O(n^4) + O(n^3) = O(n^4)


bool verifica_bipartido(int matri[MAX][MAX], int vertices); // Complexidade O(n^3)

int main(){ // O(n) * (O(n^2) * (O(n^2) + O(n^3)) = O(n) * (O(n^4) + O(n^2)) = O(n^4)
    setlocale(LC_ALL, "Portuguese"); // funcao que permite uso de acentos
    char nomeArquivo[20]; // variavel que quarda o nome do arquivo
    char linha[MAX]; // variavel que aceita as informacoes contidas no arquivo e permite a escrita dela
    int res = 0; // variavel para comparacao
    bool result; // variavel para quardar o resultado da funcao
    int numLinhas = 0; // variavel para quardar o numero de linhas
	int matriz[MAX][MAX]; // variavel para conter os valores do arquivo em uma matriz
	int i, j;  // variaveis para i = linha e j = coluna
	FILE *arq; // criar variavel de arquivo
	
	printf("\t####  BIPARTIDO ####\n\n");  // titulo     
	do // loop infinito  O(n)
	{ 
		fflush(stdin); // Limpar o buff de strings  
		printf("\nInforme o nome do arquivo ou digite 's' para sair: "); // escolha do arquivo
		scanf("%s", nomeArquivo);
		res = strcmp(nomeArquivo, "s"); // Compara se o nome é igual a 'sair' se for igual a 0 sai
		strcat(nomeArquivo, ".txt");       // Concatenação do nome para ter '.txt'
		system("cls");  // Limpa a tela do prompt
		
		// Verifica se o arquivo existe
		if((arq = fopen(nomeArquivo, "r")) == NULL) // abre o arquivo
		{
			printf("\n");
			printf("\tErro na abertura do arquivo!!!\n\n"); // Msg de erro
    	}
		else
		{ 
		// descobrir quantas linhas possui, 'sizeof'(ajuda a entender o tamanho de um objeto)
			while (fgets(linha, sizeof(linha), arq) != NULL) // O(n)
			{
                numLinhas++; // Incrementa o contador de linhas
            }
            fclose(arq); // fecha o arquivo
            if((arq = fopen(nomeArquivo, "r")) != NULL) // abre o arquivo
			{
				for(i = 1; i <= numLinhas; i++) // linha  O(n)
            	{
					for(j = 1; j <= numLinhas; j++) // coluna O(n)
					{
						fscanf(arq, "%d", &matriz[i][j]); // escreve na posicao baseada na linha e coluna
					}
				} 
				// Estetica {
				printf("\n\t####  BIPARTIDO ####\n\n"); // apenas o titulo
				printf("\t  ");
                for (j = 1; j <= numLinhas; j++) // O(n)
				{
                    printf("  V%d", j);    // printar um rotulo em cima das colunas
                }
                printf("\n"); 
				for (i = 1; i <= numLinhas; i++) // linha  O(n)
				{
					printf("\tV%d ", i);   // printar rotulo nas linhas
        			for (j = 1; j <= numLinhas; j++) // coluna  O(n)
					{
            			printf("[%d] ", matriz[i][j]); // printar na posicao correta estabelecida
        			}
        			printf("\n");
        		}
        		// } Estetica
        		// chama a funcao bipartido e quarda o valor em result
        		result = verifica_bipartido(matriz, numLinhas); // O(n^3)
        		numLinhas = 0; // zerar o numero de linhas para nao bugar matriz subsequentes
			}
			fclose(arq); // fecha o arquivo
			 
			if (result) // se retornar true quer dizer que eh bipartido
			{
    			printf("\n\tBIPARTIDO.\n");
			}
			else  // senao nao eh bipartido
    		{
    			printf("\n\tNÃO BIPARTIDO.\n");
    		}
		}
	}
	while(res != 0); // fim do loop do-while
	
	system("cls"); // Limpa a tela do prompt
	printf("\n\tPROGRAMA FINALIZADO"); // Msg final
}


//Calculo de Complexidade [ O(n) + O(n) + O(n) + (O(n) * O(n) * O(n)) = O(n) + O(n^3) = O(n^3) ]
bool verifica_bipartido(int matriz[MAX][MAX], int vertices) 
{
    int corVer[MAX]; // array para armazenar cores do vertice
    int fila[MAX];  // array de fila para quardar os vertices processados
    int frente= 0, tras = 0; // variaveis do inicio e do final da fila
	int x, y;  // variaveis de x = linha e y = coluna
	int i, inicio; // variavel inicio para iniciar a analise do grafo
	
	for (i = 1; i <= vertices; i++) // O(n)
    {
        corVer[i] = -1; // coloca todas as cores dos vetores como -1 para dizer que nenhum vertice esta pintado ainda
	}
	
    // o seguinte for = para cada vertice do grafo, não para até passar por todos os vertices, ajuda se o grafo for desconexo
	for(inicio = 1; inicio <= vertices; inicio++) // O(n)
	{
		if(corVer[inicio] == -1) // se o vertice ainda não foi colorido
		{
			corVer[inicio] = 1; // atribui cor 1 para o primeiro vertice 
		
			fila[tras++] = inicio; // adciona primeiro vertice a fila
			
			// o seguinte while = enquanto fila nao estiver vazia
			while (frente != tras) // O(n)    
			{
    	    	x = fila[frente++]; // remove o vertice da frente da fila e o adiciona em x
        		if (matriz[x][x]) // se o vertice tiver uma aresta para si(igual a 1) retorna falso, bipartido nao pode ter laco
        		{
            		return false;
				}
				
				// para cada vertice ele vai verificar se a linha possui '1'(verdadeiro) e se está sem cor, se estiver sem, ele adiciona na fila e da uma cor oposta a do vertice inicial
        		for (y = 1; y <= vertices; ++y)  // O(n)
				{
            		if (matriz[x][y]/* se eh verdadeiro(igual a 1) */ && corVer[y] == -1) // se o vertice y é adjacente ao vertice x e ainda nao foi colorido
					{
                		corVer[y] = 1 - corVer[x]; // atribui a cor oposta a cor do vertice x ao vertice y a cor 0
                		fila[tras++] = y; // adiciona o vertice y a fila
           	 		}
            		else if (matriz[x][y]/*(se igual a 1)*/ && corVer[y] == corVer[x]) // se o vertice y e adjacente ao x e possuem mesma cor retorna falso, pois em grafos bipartidos vertices adjacentes devem ter cores diferentes
            		{
			    		return false;
					} 
        		}	
    		}
		}
	}
    
    // Imprime os vértices de cada grupo
    printf("\n\tConjunto 1: ");
    for (i = 1; i <= vertices; i++) // O(n)
	{
        if (corVer[i] == 1) // cor 1
        {
        	printf("V%d ", i);
		}
    }
    printf("\n");
	
    printf("\tConjunto 2: ");
    for (i = 1; i <= vertices; i++) // O(n)
	{
        if (corVer[i] == 0) // cor 0
		{
			printf("V%d ", i);
		} 
    }
    printf("\n");
    
    return true;
}
