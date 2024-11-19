#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, i, j;
    printf("Digite um número entre 2 e 20: ");
    scanf("%d", &n); // 5
    if(n<2||n>20){
    	printf("\n\nO QUE EU DISSE HEIN, A REGRA É CLARA, ENTRE 2 E 20. >:(\n\n");
	}else{
		for(i=1;i<=n;i++){ //      1<5 2<5 3<5 4<5   5<=5
		    for(j=1;j<=i;j++){ //  1<1 1<2 1<3 1<4   1<=5
		    	printf("%d", j); //1   12  123 1234  12345
			}
            printf("\n"); // no final o 'i'= 6, por causa do i++
        }
        for(i=n-1;i>=1;i--){  //5-1= 4>=1 3>=1 2>=1  1>=1 
		    for(j=1;j<=i;j++){  //   1<4  1<3  1<2  1<=1 
		    	printf("%d", j); //  1234 123  12   1 
			}
            printf("\n");
        }
        /* ou posso fazer assim oh
        for(i=i-2;i>0;i--){  //6-2= 4>0  3>0  2>0  1>0 
		    for(j=1;j<=i;j++){  //  1<4  1<3  1<2  1<=1 
		    	printf("%d", j); // 1234 123  12   1 
			}
            printf("\n");
        }
        */
	}
	return 0; 
}

