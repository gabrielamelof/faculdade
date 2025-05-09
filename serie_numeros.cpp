#include <stdio.h>
int LerNumero(){
	int numero = 49;
	do{
		printf("Digite um número: ");
		scanf("%d", &numero);
		
		if (numero < 50 || numero > 100){
			printf("Digite um número que esteja entre 50 e 100");
		}
	}while(numero < 50 || numero > 100);
	
	return numero;
}

int Calcular(int numero){
	int resultado = 0;
	
	for(int i = 1; i <= numero; i++){
		resultado += i;
	}
	
	return resultado;
}

int main (void){
	int numero = LerNumero();
	int resultado = Calcular(numero);
	
	printf("O resultado da série de números é: %d", resultado);
	
	return 0;
}