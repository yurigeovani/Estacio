#include<stdio.h>

void trocaValores (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    /* Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2
    variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas
    variáveis A e B, por exemplo, e após a execução da função, A conterá o valor de B e B
    terá o valor de A. */

    int a, b;

    printf("Informe o valor de A: ");
    scanf("%i", &a);
    
    printf("Informe o valor de B: ");
    scanf("%i", &b);

    printf("Antes da troca\n");
    printf("A = %i\n", a);
    printf("B = %i\n", b);

    trocaValores(&a, &b);

    printf("Depois da troca\n");
    printf("A = %i\n", a);
    printf("B = %i\n", b);

    return 0;
}
