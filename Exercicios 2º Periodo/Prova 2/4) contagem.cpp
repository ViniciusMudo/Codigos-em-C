#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, j;
    x=2;
    j=1;
    while(j<10){
    	x=x+1;
    	j=j+2;
	}	
	printf("%d, %d", x, j);
	return 0;
}

