#include <stdio.h>

int main (void){
	int num, col, linha;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	printf("\n");
	
	for (linha = 1; linha <= num; linha++){
		
		for(col = 1; col <= num; col++){
		printf("* ");
		
		}
		printf("\n");
	}
	
	
	return 0;
}