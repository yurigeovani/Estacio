#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Crie um programa que contenha um vetor de float contendo 10 elementos. Imprima o
    endereço de cada posição desse vetor. */

    float array[10] = {00.0, 11.1, 22.2, 33.3, 44.4, 55.5, 66.6, 77.7, 88.8, 99.9};

    for (size_t i = 0; i<10; i++)
    {
        printf("Array na posicao %li, valor = %f, endereco de memoria = %p\n", i, array[i], &array[i]);
    }

    return 0;
}
