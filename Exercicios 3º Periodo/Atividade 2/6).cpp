#include <stdio.h>
#include <locale.h>
int y;
int f(int a, int *b, int c){
	while(*b<=c){
		a=*b+c;
		y=*b+1;
	};
	return a+*b+c;	
};
int main(){
    setlocale(LC_ALL, "Portuguese");
    int x=10, y=2, z=3;
    printf("%d, %d, %d, %d", f(x, &y, z), x, y, z);
	return 0;
}

