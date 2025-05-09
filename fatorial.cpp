#include <stdio.h>
int CalculaFatorial(int numero){
	int fatorial = numero;
	for (int i = 1                     ; i < numero; i++){
            fatorial *= i;
    }
    return fatorial;
}
int main(void){
	int numero, resultado;
	printf("Digite um número: ");
	scanf("%d", &numero);
	resultado = CalculaFatorial(numero);
	printf("Fatorial de %d é: %d", numero, resultado);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	