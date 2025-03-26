/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Exercício 1: Escreva um algoritmo em Português estruturado para ajudar na seleção dos 4 
//candidadtos para uma vaga de estagiário. Você deve ler as 4 notas e mostrar sua média e 
//as notas que são maiores que a média

int main()
{
   float nota1, nota2, nota3, nota4, media;
   
   printf("Digite a primeira nota: ");
   scanf("%f", &nota1);
   
   printf("\nDigite a segunda nota: ");
   scanf("%f", &nota2);
   
   printf("\nDigite a terceira nota: ");
   scanf("%f", &nota3);
   
   printf("\nDigite a quarta nota: ");
   scanf("%f", &nota4);
   
   media = (nota1 + nota2 + nota3 + nota4)/4;
   
   printf("\n\nA média das quatro notas é: %f ", media);
   
   printf("\n\nNotas acima da média");
   
   if (nota1 > media){
       printf("\nNota 1: %.2f ", nota1);
   }
    if (nota2 > media){
       printf("\nNota 2: %.2f ", nota2);
   }
    if (nota3 > media){
       printf("\nNota 3: %.2f ", nota3);
   }
    if (nota4 > media){
       printf("\nNota 4: %.2f ", nota4);
   }

    return 0;
}