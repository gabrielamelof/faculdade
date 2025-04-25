#include <stdio.h> 
  
int main(void){
  	
  	int numero, qtd = 0;
  	
  	do{
  		printf("Digite um número:");
  		scanf("%d", &numero);
  		qtd++;
	}while(numero % 2 != 0);																																																																																																																																																																										
  
	if(qtd > 3){
		printf("Preste mais atenção!");
	}
	else if (qtd < 3 && qtd > 1){
		printf("Você foi bem");
	}
	else{
		printf("Parabéns!");
	}
	
	printf("\n\n");
	
	  return 0;
  	
  }