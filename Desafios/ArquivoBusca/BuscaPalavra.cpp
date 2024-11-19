#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
	FILE *arq = fopen("Atividade.txt", "r");
	FILE *cop = fopen("Atividade.txt", "r");
	char texto[200], palavra[20], repre[200];
	int linha=0, val=0; 
	bool cont = false;
	if(cop==NULL)
	{
    	printf("Erro na abertura do arquivo!!!");
    	exit(1);
    }
	else
	{
    	while(fgets(repre, 200, cop)!=NULL)
		{
		    printf("%s", repre);
	    }
	    fclose(cop);
	}
	printf("_______________________________________________________________________________");
	if(arq==NULL){
    	printf("Erro na abertura do arquivo!!!");
    	exit(1);
    }
	else
	{
		fclose(arq);
    	do
		{
    		linha = 0;
    		val = 0;
    		fflush(stdin);
    		printf("\n\nInforme a palavra que deseja procurar ou '0' para sair: ");
            scanf("%s", palavra);
            system("cls");
        	FILE *arq = fopen("Atividade.txt", "r");
            while (fgets(texto, 200, arq)!=NULL)
			{
	    		linha++;
	        	if(strstr(texto, palavra))
				{
					cont = true;
					if(cont)
					{
						printf("\nPALAVRA ENCONTRADA!!!\n\n");
					}
	            	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		        	printf("Nº da linha:%d", linha);
		        	printf("\nFrase: %s", texto);
		        	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		        	val=1;
		        	cont = false;
		    	}
				else if(val==0 && linha==22)
				{
		    		printf("\nPalavra NÃO encontrada!!! desculpe... :(\n");
				}
			}
			fclose(arq);
        }while(strcmp(palavra, "0"));
		system("cls");	
	}
	printf("\nFIM DO PROGRAMA");
    fclose(arq);
	return 0;
}
