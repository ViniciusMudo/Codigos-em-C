#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, res;
    char o;
    printf("Digite uma operação de 2 números inteiros: ");
    scanf("%d %c %d", &a, &o, &b);
    switch(o){
    	case'+':
    		res=a+b;
    		printf("\n %d   %c   %d  =  %d\n", a, o, b, res);
    		break;
    	case'-':
    		res=a-b;
    		printf("\n %d   %c   %d  =  %d\n", a, o, b, res);
    		break;
    	case'*':
    		res=a*b;
    		printf("\n %d   %c   %d  =  %d\n", a, o, b, res);
    		break;
    	case'/':
    		if(b==0){
    			system("cls");
    			system("color f4");
				printf("\nERRO: \n\nDEST\n      RUIÇÃO D A REAL    \nIDA\n    DE!!!");
				printf("\nlidhalik 'aetaqid \n\t'anani qad 'adie\n alkathir\n\t min\n\t\t alwaqt \nfi hadha alsuwali.\n");
    			exit(0);
			}else{
				float res=(float)a/b;
				printf("\n %d   %c   %d  =  %.1f\n", a, o, b, res);
				break;
			}
		default:
			printf("\nOperador não reconhecido.\n");
		    exit(0);
	}
	return 0;
}
