#include <stdio.h> 
  
int main(void){
  	
  	int vetor[10], numero = 3;
  	
  	for(int i = 0; i < 10; i++){
  		while(numero % 2 != 0){
  			printf("Digite o número %d:", (i + 1));
  			scanf("%d", &numero);
  			if(numero % 2 == 0){
  				vetor[i] = numero;
			  }
		  }
	  }
	
	printf("\n\n");
	
	for(int a = 0; a < 10; a++){
		printf("%d ", vetor[a]);
	}
	  return 0;
  	
  }