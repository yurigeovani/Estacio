#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* Escrever um programa que leia 5 numeros e diga qual o maior número. */
    
    int vetor[5];
    int maior;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o numero: ");
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if(vetor[i]>maior)
            maior=vetor[i];
    }

    printf("O maior numero é: %d\n", maior);

    return 0;
}
