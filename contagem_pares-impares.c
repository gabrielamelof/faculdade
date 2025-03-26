/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int pares = 0, impares = 0;
    
   for (int num = 1; num <= 100; num++){
       if (num % 2 == 0){
           pares = pares + num;
       }
       else{
           impares = impares + num;
       }
   }
    printf("Soma dos números pares: %d\n",pares);
    printf("Soma dos números ímpares: %d\n\n",impares);
    printf("Soma total dos números: %d\n",impares + pares);
    
    return 0;
}
