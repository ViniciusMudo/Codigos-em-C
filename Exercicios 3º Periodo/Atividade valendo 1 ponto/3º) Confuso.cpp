#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int y, *p, x;
    y = 0; // Valor de y = 0;
   // printf("p = %d", p);
    p = &y;// p = 1, mas agora p = endere�o de y;
   // printf("\np = %d", p);
    x = *p;// x = ponteiro para p apontando para endere�o de y;
    x += 10;
    //++(*p);
    //--x;
    (*p) += x;
    printf("y = %d\n", y);
	return 0;
}

