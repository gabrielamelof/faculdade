#include <stdio.h> 
  
int main(void){
  	
  	int vetor[10];
  	
  	for(int i = 0; i < 10; i++){
  		do{
  			printf("Digite o número %d:", (i + 1));
  			scanf("%d", &vetor[i]);
		}while(vetor[i]% 2 != 0);A																																																																																																																																																																												
  	}
  	
	
	printf("\n\n");
	
	for(int a = 0; a < 10; a++){
		printf("%d ", vetor[a]);
	}
	  return 0;
  	
  }