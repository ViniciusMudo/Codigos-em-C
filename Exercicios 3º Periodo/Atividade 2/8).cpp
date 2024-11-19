#include <stdio.h>
#include <locale.h>
int fnc(int x){
	if(x<2){
		return x+1;
	}else{
		return x+fnc(x-1);
	}
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int beta=3, gama=0, alfa;
    alfa=fnc(beta);
    printf("%d", alfa);
	return 0;
}
