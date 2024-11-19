#include <stdio.h>
#include <locale.h>
int main(){
	int tempDom, tempSeg, tempTer, tempQuar, tempQui, tempSex, tempSab, v;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe a temperatura do Domingo:");
	scanf("%d", &tempDom);
	printf("Informe a temperatura da Segunda:");
	scanf("%d", &tempSeg);	
	printf("Informe a temperatura da Terça:");
	scanf("%d", &tempTer);	
	printf("Informe a temperatura da Quarta:");
	scanf("%d", &tempQuar);	
	printf("Informe a temperatura da Quinta:");
	scanf("%d", &tempQui);	
	printf("Informe a temperatura da Sexta:");
	scanf("%d", &tempSex);	
	printf("Informe a temperatura do Sábado:");
	scanf("%d", &tempSab);	
	printf("DOM: ");
	for(v=1;v<=tempDom;v++){		
		printf("#");
	}
	printf("\n");
	printf("SEG: ");
	for(v=1;v<=tempSeg;v++){		
		printf("#");
	}
	printf("\n");
	printf("TER: ");
	for(v=1;v<=tempTer;v++){		
		printf("#");
	}
	printf("\n");
	printf("QUA: ");
	for(v=1;v<=tempQuar;v++){		
		printf("#");
	}
	printf("\n");
	printf("QUI: ");
	for(v=1;v<=tempQui;v++){		
		printf("#");
	}
	printf("\n");
	printf("SEX: ");
	for(v=1;v<=tempSex;v++){		
		printf("#");
	}
	printf("\n");
	printf("SAB: ");
	for(v=1;v<=tempSab;v++){
		printf("#");
	}
	printf("\n");

	return 0;
}

