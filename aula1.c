/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    float numero1, numero2;
 
    printf("Digite um número: ");
    scanf("%f", &numero1);
    
    printf("Digite um número: ");
    scanf("%f", &numero2);
    
    if (numero1 > 10){
        printf("O número é maior que 10\n");
    }
    else{
        printf("O número não é maior que 10\n");
    }
    
    if(numero1 > numero2){
        printf("%.2f", numero1, " é maior do que", numero2);
    }
    else if (numero2 > numero1){
        printf("%.2f", numero2, " é maior do que", numero1);
    }
    else if (numero1 == numero2){
        printf("Os dois números são iguais");
    }
    printf ("\ndobro = %.2f\n", 2*numero1);
    return 0;
    
    
    
    
}
