#include <stdio.h>

int main (void){
	int num;
	
	
	printf("\n");
	
	for(num = 1; num <= 10; num++){
		printf("\n=======================");
		printf("\n\nTabuada do %d", num);
		for(int i = 0; i <= 10; i++){
		printf("\n%2d x %2d = %3d", num, i, (num*i));
	}
	}
	
	
	return 0;	
}