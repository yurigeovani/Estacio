#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* 10. Crie um programa que contenha um vetor contendo 5 elementos inteiros.
    Leia esse vetor do teclado e imprima o endereço das posições contendo valores pares. */

    int vetor[5];

    for (size_t i = 0; i < 5; i++)
    {
        printf("Informe o valor na posicao %i = ", i);
        scanf("%i", &vetor[i]);
    }

     for (int i = 0; i < 5; i++) {
        if (vetor[i]%2==0)
        {
            printf("Posicao: %i, endereco: %p, valor: %d\n", i, &vetor[i], vetor[i]);
        }   
    }

    return 0;
}
