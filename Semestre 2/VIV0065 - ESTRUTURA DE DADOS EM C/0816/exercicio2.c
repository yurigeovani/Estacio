#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* Escrever um programa que leia 5 numeros e some todos. */
    
    int vetor[5];
    int soma=0;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o numero %d: ", i+1);
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        soma+=vetor[i];
    }

    printf("%d\n", soma);
    return 0;
}
