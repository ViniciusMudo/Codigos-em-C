#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3, n4, i;
    n1=1;
    n2=1;
    n3=2;
    printf("%d\n%d\n%d", n1, n2, n3);
    for(i=0;i<27;i++){
    	n4=n1+n2+n3;
    	printf("\n%d", n4);
    	n1=n2;
    	n2=n3;
    	n3=n4;
	}
	return 0;
}

