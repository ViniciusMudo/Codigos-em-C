#include <stdio.h>
int fat(int n){
	if(n<2){
		return 1;
	}else{
		return n*fat(n-1);
	}
}
int main(){
	int resul=0, x;
	printf("Digite o numero que deseja fatorar: ");
	scanf("%d", &x);
	resul=fat(x);
	printf("\n  %d! = %d\n", x, resul);
	return 0;
}

