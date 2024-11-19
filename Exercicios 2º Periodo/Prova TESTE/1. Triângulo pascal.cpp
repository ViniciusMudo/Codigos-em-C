#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//m[i][j] = m[i-1][j] + m[i-1][j-1] fórmula do triângulo Pascal
int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, i, j;
    int** mat; // dois ponteiros para matriz, eu acho;
    printf("Informe o valor de x: ");
    scanf("%d", &x);
    mat=(int**)malloc(x * sizeof(int*)); // aparentemente é assim que faz matriz;
	for(i=0;i<x;i++){ 
    	mat[i]=(int*)malloc(x * sizeof(int));
    	for(j=0;j<x;j++){
    		if(j==0 || i==j){ // 'i==j' = diagonal principal;
    			mat[i][j]=1;
			}else if(i>j){
				mat[i][j] = mat[i-1][j] + mat[i-1][j-1];
			} //   [3][2] =    [3-1][2] +    [3-1][2-1];   
		}     //     3    =        1    +        2
	}
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			if(i>=j){
				printf("%5d", mat[i][j]);
			}
		}
		printf("\n%d", i);
	}
	return 0;
}

