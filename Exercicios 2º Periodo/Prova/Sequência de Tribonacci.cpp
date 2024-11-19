#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n[30]={1, 1, 2}, i;
           //n[0][1][2]	
	for(i=3;i<30;i++){
		n[i]=n[i-1]+n[i-2]+n[i-3];
	}
	for(i=0;i<30;i++){
		printf("%d\n", n[i]);
	}
	return 0;
}

