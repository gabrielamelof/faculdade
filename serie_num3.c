/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float soma = 0;
    
    for(int pos = 1;pos <= 101;pos++){
        soma = soma + (pos/(pos * 2.0));
    }
    
    printf("Resultado: %.2f",  soma);
   

    return 0;
}
