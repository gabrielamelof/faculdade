#include <stdio.h>

int main (void){
	
	int final, resultado = 0; 
	
	
	printf("Digite o número final da sequencia: ");
	scanf("%d", &final);
	
	for (int i = 1; i <= final; i++){
		printf(" %d", i);
		
		if (i < final){
			if(i % 2 == 0 ){
			printf(" -");
			resultado -= i;
		}
		else{
			printf(" +");
			resultado += i;
		}
		}
		
				
	} 
	printf(" = %d", resultado);
	return 0;
}