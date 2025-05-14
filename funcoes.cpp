#include <stdio.h>

void NumeroPar(int *par, int *impar);
int main (void){
	int num1 = 10, num2 = 3;
	int soma = num1 + num2;
	printf("Numero 1: %d\nNumero 2:%d\n", num1, num2);
	printf("Soma dos numeros: %d\n", soma);
	NumeroPar(&num1, &num2);
	printf("Numero par: %d\nNumero impar:%d\n", num1, num2);
	
	
}
void NumeroPar(int *par, int *impar){
	*par = 10;
	*impar = 9;
}