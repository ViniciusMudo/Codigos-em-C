#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, i, j;
    printf("Digite um número entre 2 e 20: ");
    scanf("%d", &n); // 5
    if(n<2||n>20){
    	printf("\n\nO QUE EU DISSE HEIN, A REGRA É CLARA, ENTRE 2 E 20. >:(\n\n");
	}else{
		for(j=1;j<=n;j++){ 
	    	printf("%d", j); 
		}
		printf("\n");
		for(i=i+1;i<=n;i++){ 
            printf("X");
			for(j=i+1;j<=n;j++){ 
	    	    printf("%d", j);
				 
		    }		
		    printf("\n");
        }
   }
	return 0;
}

