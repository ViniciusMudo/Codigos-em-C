#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main(){
	int jogador, computador;
	setlocale(LC_ALL, "Portuguese");
	printf("  (# # # - - - PEDRA PAPEL TESOURA - - - # # #)\n1 - PEDRA\n2 - PAPEL\n3 - TESOURA\n4 - SAIR\n-------------------------------\n");
	do{
		printf("Lance o número da jogada: ");
	    scanf("%d", &jogador);
	    if(jogador<1 || jogador>4){ 
	    	printf("Opção inválida! Escolha novamente.\n");
		}
	}while(jogador<1 || jogador>4);
	switch(jogador){
		case 1:
			printf("\nJogador escolheu PEDRA.");
			break;
		case 2:
			printf("\nJogador escolheu PAPEL.");
			break;
		case 3:
			printf("\nJogador escolheu TESOURA.");
	        break;
	    case 4:
	    	printf("\n\nJogo Encerrado!!!\n\n");
			exit(0);
	    	break;
	}
	srand(time(NULL));
	computador=("%d", rand() % 3+1);
	switch(computador){
		case 1:
			printf("\nComputador escolheu PEDRA.");
			break;
		case 2:
			printf("\nComputador escolheu PAPEL.");
			break;
		case 3:
			printf("\nComputador escolheu TESOURA.");
			break;
	}
	if(jogador==computador){
		printf("\n\n   EMPATE!!!\n");
	}else if(jogador==1&&computador==3||jogador==2&&computador==1||jogador==3&&computador==2){
		printf("\n\n   Jogador Ganhou!!!\n");
	}else{
		printf("\n\n   Computador Ganhou!!!\n");	
	}
	return 0;
}

