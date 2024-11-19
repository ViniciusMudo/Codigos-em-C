#include <stdio.h>
#include <locale.h>
void f1(int n1, int n2){ // não vai trocar, pois foi passado apenas o valor, ou seja, fez-se uma cópia;
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
void f2(int* n1, int* n2){ // vai trocar, pois o valor foi passado por referência;
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1=50, num2=70;
    f1(num1, num2);
    printf("%d %d", num1, num2);
    num1=50;
    num2=70;
    f2(&num1, &num2);
    printf(" %d %d", num1, num2);
	return 0;
}

