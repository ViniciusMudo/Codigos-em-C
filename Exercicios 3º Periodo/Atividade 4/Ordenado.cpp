#include <stdio.h>
#include <locale.h>
#define MAX 3
int main(){
    setlocale(LC_ALL, "Portuguese");
    int aux, i, j, vet[MAX];
    printf("Informe 3 números:\n");
    scanf("%d %d %d", &vet[0], &vet[1], &vet[2]); 
    if(vet[0]==vet[1] && vet[0]==vet[2]){
       printf("Os valores são iguais.\n");  
    }else{
	    for(i=0;i<MAX;i++){
    	    for(j=0;j<MAX;j++){  
    		    if(vet[i]<vet[j]){ 
    			   aux=vet[i];
    			   vet[i]=vet[j];
    			   vet[j]=aux;
			    }
		    }
	    }
    }  
    printf("\nVetor Ordenado: ");
    for(i=0;i<MAX;i++){
    	printf("%d ", vet[i]);
	}
	return 0;
}

