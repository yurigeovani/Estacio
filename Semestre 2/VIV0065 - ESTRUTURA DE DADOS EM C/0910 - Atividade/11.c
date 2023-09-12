#include<stdio.h>

    /*  Faça um programa que leia três valores inteiros e chame uma função que receba esses 
    3 valores de entrada e os retorne ordenados, ou seja, o menor valor na primeira variável, 
    o segundo menor valor na variável do meio e o maior valor na última variável. A função 
    deverá retornar o valor 1 se os três valores forem iguais e 0 se existirem valores 
    diferentes. Exiba os valores ordenados na tela. */

int ordenaValores (int numeros[3]) {
    int temp;

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (numeros[i]<numeros[j])
            {
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    for (size_t i = 0; i < 3; i++)
    {
        printf("O valor na posicao %li eh = %i\n", i, numeros[i]);
    }

    if(numeros[0]==numeros[1] && numeros[0]==numeros[2])
        return 1;
    else
        return 0;
}

int main(int argc, char const *argv[])
{

    int numeros[3];

    for (size_t i = 0; i < 3; i++)
    {
        printf("Informe o valor do numero %li = ", i);
        scanf("%i", &numeros[i]);
    }

    printf("Retorno da funcao = %i\n", ordenaValores(numeros));

    return 0;
}
