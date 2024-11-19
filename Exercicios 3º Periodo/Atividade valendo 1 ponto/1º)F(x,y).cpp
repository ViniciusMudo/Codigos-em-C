#include <stdio.h>
#include <locale.h>
int f(int x, int* y){
	x+=2;
	*y-=2;
	return(x, *y);
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int a=10;
    int b=20;
    printf("%d  %d\n\n", a, b);
    f(a, &b);
    printf("%d  %d\n", a, b);
	return 0;
}

