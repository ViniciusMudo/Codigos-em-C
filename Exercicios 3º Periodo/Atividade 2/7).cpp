#include <stdio.h>
#include <locale.h>
int recursiva(int x){ // 4
	if(x==1){
		return -x; // aqui retorna '-1'
	}else{
		return -5*recursiva(x-1)+x;
		    /*  Se x for igual a '4'
	           
			   -5 * -1 + 2  = 7 
	           -5 * 7 + 3 = -32
	           -5 * -32 + 4 = 164
		    */
    }
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    scanf("%d", &x);
    x = recursiva(x);
    printf("\n%d", x);
	return 0;
}
