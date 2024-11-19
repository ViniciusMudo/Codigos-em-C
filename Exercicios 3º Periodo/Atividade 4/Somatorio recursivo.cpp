#include <stdio.h>
int soma(int n){ 
	if(n==0){ 
		return 0;
	}else{
		return n+soma(n-1);
	}
}
int main(){
	int resul=0, x;
	printf("Digite o numero que deseja somatorio: ");
	scanf("%d", &x);
	resul=soma(x);
	printf("\n%d\n", resul);
	return 0;
}

