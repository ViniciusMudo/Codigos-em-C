#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, m, ori, fat, contDivisor=0, soma=0;
    printf("|||||||==== M DE MALUCO ====|||||||\n\n");
	printf("Digite um número inteiro e positivo ou -1 pra encerrar: "); 
	scanf("%d", &m);
	if(m%2==0){
	    for(i=1;i<=m;i++){
	    	if(m%i==0){
	    		contDivisor++;
			}
		}
		printf("Quantidade de divisores: %d\n\n", contDivisor);
	}else{
		if(m<10 && m>0){
			ori=m;
			for(fat=1;m>1;m--){
				fat=fat*m;
			}
		printf("    %d!= %d\n\n", ori, fat);
		}else if(m>0){
			
			for(i=1;i<=m;i++){
				soma=soma+i;
			}
		printf("Soma total de 1 até %d: %d\n\n", m, soma);
		}
	}
	while(m>0){
		printf("Digite um número inteiro e positivo ou -1 pra encerrar: "); 
	    scanf("%d", &m);
		contDivisor=0; 
		if(m%2==0){
	    	for(i=1;i<=m;i++){
	    		if(m%i==0){
	    	    	contDivisor++;
				}
			}
			printf("Quantidade de divisores: %d\n\n", contDivisor);
		}else{
			if(m<10 && m>0){
				ori=m;
				for(fat=1;m>1;m--){
					fat=fat*m;
		    	}
		printf("    %d!= %d\n\n", ori, fat);
	    	}else if(m>0){
	    		soma=0;
			    for(i=1;i<=m;i++){
				    soma=soma+i;
			    }
		    printf("Soma total de 1 até %d: %d\n\n", m, soma);
	    	}
	    }
	}
	printf("\n\n|---------FIM DO PROGRAMA---------|\n\n");
	return 0;
}

