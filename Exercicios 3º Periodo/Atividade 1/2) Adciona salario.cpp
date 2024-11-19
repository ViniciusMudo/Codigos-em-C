#include <stdio.h>
#include <locale.h>
#define ADD 1000
void adcionar(float *sal){
    if(*sal<=5000){
    	*sal=*sal+ADD;
	}
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    float salario;
    printf("Informe o seu salário: ");
    scanf("%f", &salario);
    adcionar(&salario);
	printf("Salário: %.2f", salario);
	return 0;
}
