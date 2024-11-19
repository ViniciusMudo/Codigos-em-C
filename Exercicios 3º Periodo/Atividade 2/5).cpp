#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int y, x=1, cont;
    while (x<10) {
    	y=x+2;
    	while (y<10){
    		printf("%d, %d\n", x, y);
    		cont++;
    		y=y+1;
		};
		x=x+1;
	};
	printf("\n%d", cont);
	return 0;
}

