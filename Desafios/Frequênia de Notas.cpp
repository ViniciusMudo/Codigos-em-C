#include <stdio.h>
#include <locale.h>
// Ex: 5 7 9 5 2   vai ficar assim no vetor {0, 0, 1, 0, 0, 2, 0, 1, 0, 1...} 
//                                 posi??es {0, 1, 2, 3, 4, 5, 6, 7, 8, 9...}
int main(){
	setlocale(LC_ALL, "Portuguese");
	int notas[200], n, i, maisfreq, qtde, maior;
	for(i=0;i<200;i++){ // encher cada valor com '0's.
		notas[i]=0; 
	}
	printf("Informe o número de alunos com limite de 200: ");
	scanf("%d", &qtde);
	printf("\n");
	for(i=0;i<qtde;i++){
		printf("Informe a nota: ");
		scanf("%d", &n); // adicionar o valor de 'n'.
		if(n>100||n<0){
			printf("Nota inválida\n");
			i--;
		}else{
			notas[n]++; // adicionar +1 na posicao 'n' do vetor.
		}
	}
	maior=notas[0];
	maisfreq=0;
	for(i=1;i<200;i++){ 
		if(notas[i]>=maior){ // notas[i] vai comecar da 2 posicao com esse '1', por isso a variavel 'maior' ? a 1? posicao '0'.
			maior=notas[i]; // maior tem que se atualizar a cada volta, notas[i] vai para 3 posicao e maior vai para 2 posicao.
			maisfreq=i; // aquele que tiver o numero maior se torna o mais frequente. 
		}
    } 
	printf("Maior frequência: %d\n", maisfreq);
	return 0;
}
