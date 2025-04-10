#include <stdio.h>

int main (void){
	
	int final, soma = 0; 
	
	
	printf("Digite o número final da sequencia: ");
	scanf("%d", &final);
	
	for (int i = 1; i <= final; i++){
		printf(" %d", i);
		soma += i;
		if (i == final){
			printf(" = %d", soma);
		}
		else{
			printf(" +");
		}
	}
	return 0;
}