#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* Crie um programa que contenha um vetor de inteiros contendo 5 elementos. Utilizando
    apenas aritmética de ponteiros, leia esse vetor do teclado e imprima o dobro de cada
    valor lido. */

    int vetor[5];

    for (size_t i = 0; i < 5; i++)
    {
        printf("Informe o valor de A na posicao %i: ", i);
        scanf("%i", &vetor[i]);
    }

     for (int i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]*2);
    }

/*     while (*vetor)
    {
        printf("O dobro eh = %i\n", *vetor*2);
        vetor++;
    }
 */

    return 0;
}
