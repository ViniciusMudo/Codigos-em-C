#include <stdio.h>
#include <locale.h>
//OLHA VINICIUS LEMBRE "QUANDO FOR USAR O PROGRAMA, USE A VÍRGULA (EX:12030,30) NÃO (1230.30) PONTO É ERRADO"
int main(){
    char nome;
	double salAtual, vendas;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o primeiro nome do vendedor:");    scanf("%s", &nome);
	printf("Informe o seu salário fixo:");             scanf("%lf", &salAtual);
	printf("Informe o valor total de vendas do mês:"); scanf("%lf", &vendas);
	printf("\n Parabéns você recebeu um bônus de R$%.2lf e seu salário do mês é: R$%.2lf\n", vendas*0.15, salAtual+vendas*0.15);
	return 0;
}
