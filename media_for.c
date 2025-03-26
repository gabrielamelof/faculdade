/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float nota, media, notas[4];
   
   
   for(int i = 0; i < 4; i = i + 1){
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
   }
   
   
   
   media = (notas[0] + notas[1] + notas[2] + notas[3])/4;
   
   printf("\n\nA média das quatro notas é: %f ", media);
   
   printf("\n\nNotas acima da média");
   
   
   for(int i = 0; i < 4;  i = i + 1){
       if (notas[i] > media){
       printf("\nNota %d: %.2f ",  i + 1, notas[i]);
        }
   }
   
   
    return 0;
}