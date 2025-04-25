#include <stdio.h> 
  
int main(void){
  	
  	int vetor[10], decisor;
  	
  	for(int i = 0; i < 10; i++){
		if (i % 2 == 0){
  			decisor = 0;
		}
		else{
			decisor = 1;
		}
		do{
	  		printf("Digite o número %d:", (i + 1));
	  		scanf("%d", &vetor[i]);
	  			
		}while(vetor[i]% 2 != decisor);																																																																																																																																																																												
  	}
  	
	
	printf("\n\n");
	
	for(int a = 0; a < 10; a++){
		printf("%d ", vetor[a]);
	}
	  return 0;
  	
  }