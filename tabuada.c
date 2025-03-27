#include <stdio.h>

int main (void){
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	printf("\n");
	
	for(int i = 0; i <= 10; i++){
		printf("\n");
		printf("%d x %d = %d", num, i, (num*i));
	}
	
	return 0;	
}