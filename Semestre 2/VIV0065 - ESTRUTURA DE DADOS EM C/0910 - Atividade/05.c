#include <stdio.h>

void comparaValores (int *a, int *b){
    int temp;

    if(*a<*b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(int argc, char const *argv[])
{
    /* Faça um programa que leia dois valores inteiros e chame uma função que receba esses
    2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na
    segunda variável. Escreva o conteúdo das 2 variáveis na tela. */

    int a, b;

    printf("Informe o valor de A: ");
    scanf("%i", &a);
    
    printf("Informe o valor de B: ");
    scanf("%i", &b);

    printf("Antes da comparacao\n");
    printf("A = %i\n", a);
    printf("B = %i\n", b);

    comparaValores(&a, &b);

    printf("Depois da comparacao\n");
    printf("A = %i\n", a);
    printf("B = %i\n", b);

    return 0;
}
