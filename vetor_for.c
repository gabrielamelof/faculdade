  #include <stdio.h> 
  
int main(void){
  	
  	int vetor[10];
  	
  	for(int i = 0; i < 10; i++){
  		printf("Digite o número %d:", (i + 1));
  		scanf("%d", &vetor[i]);
	  }
	
	printf("\n\n")
	for(int a = 0; a < 10; a++){
		printf("%d ", vetor[a]);
	}
	  return 0;
  	
  }