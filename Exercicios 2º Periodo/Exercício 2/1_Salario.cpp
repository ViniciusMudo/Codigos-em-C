#include <stdio.h>
#include <locale.h>
//OLHA VINICIUS LEMBRE "QUANDO FOR USAR O PROGRAMA, USE A V�RGULA (EX:12030,30) N�O (1230.30) PONTO � ERRADO"
int main(){
    char nome;
	double salAtual, vendas;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o primeiro nome do vendedor:");    scanf("%s", &nome);
	printf("Informe o seu sal�rio fixo:");             scanf("%lf", &salAtual);
	printf("Informe o valor total de vendas do m�s:"); scanf("%lf", &vendas);
	printf("\n Parab�ns voc� recebeu um b�nus de R$%.2lf e seu sal�rio do m�s �: R$%.2lf\n", vendas*0.15, salAtual+vendas*0.15);
	return 0;
}
