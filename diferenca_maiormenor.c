#include <stdio.h>

int main()
{
    float num = 0;
    float maior, diferenca = 0;
    float menor = 10;
    
    
    for(int i = 0; i <= 9; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &num);
        if (num > maior){
            maior = num;
        }
        if (num < menor){
        	menor = num;
		}
    }
    
    diferenca = maior - menor; 
    
    printf("\nO maior numero e: %.2f", maior);
    printf("\nO menor numero e: %.2f", menor);
    printf("\nA diferenca entre os dois numeros e %.2f", diferenca);
    return 0;
}