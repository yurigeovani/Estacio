#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* Crie um programa que contenha um vetor de inteiros contendo 5 elementos. Utilizando
    apenas aritmética de ponteiros, leia esse vetor do teclado e imprima o dobro de cada
    valor lido. */

    int vetor[5];

    for (size_t i = 0; i < 5; i++)
    {
        printf("Informe o valor na posicao %i = ", i);
        scanf("%i", &vetor[i]);
    }

     for (int i = 0; i < 5; i++) {
        printf("O dobro do valor na posicao %i eh = %d\n", i, vetor[i]*2);
    }

    return 0;
}
