/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float num = 0;
    float maior = 0;
    
    for(int i = 0; i <= 9; i++){
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &num);
        if (num > maior){
            maior = num;
        }
    }
    
    printf("O maior número é: %.2f", maior);
    return 0;
}