#include <stdio.h>
#include <locale.h>
// altura, sexo peso ideal;
// homi=72.7*alt-58    muier=62.1*alt-44.7;
float pesoIdeal(float alt, char SEX){
	float p=0;
	if(SEX=='M' || SEX=='m'){
		p=(72.7*alt)-58.0;
	}else{
		p=(62.1*alt)-44.7;	
	}	
	return p;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    float alt, ideal;
	char sexo;
    printf("M=Homem    F=Mulher\n\n");
	printf("Informe o sexo:");
	scanf("%c", &sexo);
	printf("Informe a sua altura: "); 
	scanf("%f", &alt);
	ideal=pesoIdeal(alt, sexo);
	printf("\nSeu peso ideal: %.2fKg\n", ideal);
	return 0;
}

