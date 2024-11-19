#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float preco, pagamento;
    int op, vezes;
    printf("Digite o total gasto: ");
    scanf("%f", &preco);
    printf("\n 1)Opção: a vista com 10%% de desconto\n 2)Opção: em duas vezes (preço da etiqueta)\n 3)Opção: de 3x até 10x com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n\n Digite a opção: ");
    scanf("%d", &op); 
    switch(op){
    	case 1:
    		pagamento=preco-(preco*0.1);
    		printf("\nPagamento a vista: %.2f", pagamento);
    		break;
    	case 2:
    		pagamento=preco/2.0;
    		printf("\nPagamento das parcelas: %.2f", pagamento);
    		break;
    	case 3:
    		if(preco>100){
    		    printf("\nDividido em quantas vezes?(Limite de 10x): ");
    		    scanf("%d", &vezes);
    		    pagamento=preco/vezes+(preco/vezes)*0.03;
    		    printf("Pagamento das parcelas: %.2f", pagamento);
			}else{
				printf("\nOpção Inválida.\n");
			}
    		break;
    	default:
    		printf("\nOpção Inválida.\n");
	}
	return 0;
}

