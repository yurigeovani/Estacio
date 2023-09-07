#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* Crie um programa que contenha um vetor de inteiros contendo 5 elementos. Utilizando
    apenas aritmética de ponteiros, leia esse vetor do teclado e imprima o dobro de cada
    valor lido. */

/*     int *vetor;

    for (size_t i = 0; i < 5; i++)
    {
        printf("Informe o valor de A na posicao %i: ", i);
        scanf("%i", &vetor+i);
        vetor++;
    }

    

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(vetor + i));
    } */

/*     while (*vetor)
    {
        printf("O dobro eh = %i\n", *vetor*2);
        vetor++;
    }
 */

    int vetor[5]; // Declara um vetor de inteiros com 5 elementos

    printf("Digite 5 números inteiros:\n");

    // Usando aritmética de ponteiros para ler os valores do teclado e calcular o dobro
    for (int i = 0; i < 5; i++) {
        scanf("%d", &(*(vetor + i))); // Lê um valor e armazena no vetor
        //*(vetor + i) *= 2; // Calcula o dobro do valor lido no próprio vetor
    }

    printf("Valores dobrados:\n");

    // Usando aritmética de ponteiros para imprimir o dobro de cada valor
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(vetor + i));
    }


    return 0;
}
