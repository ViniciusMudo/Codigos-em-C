#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float preco, pagamento;
    int op, vezes;
    printf("Digite o total gasto: ");
    scanf("%f", &preco);
    printf("\n 1)Op��o: a vista com 10%% de desconto\n 2)Op��o: em duas vezes (pre�o da etiqueta)\n 3)Op��o: de 3x at� 10x com 3%% de juros ao m�s (somente para compras acima de R$ 100,00)\n\n Digite a op��o: ");
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
				printf("\nOp��o Inv�lida.\n");
			}
    		break;
    	default:
    		printf("\nOp��o Inv�lida.\n");
	}
	return 0;
}

