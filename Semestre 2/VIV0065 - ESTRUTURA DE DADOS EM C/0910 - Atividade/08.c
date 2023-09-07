#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
    Imprima o endereço de cada posição dessa matriz. */

    float matriz[3][3] = {{0.0, 0.1, 0.2},{1.0, 1.1, 1.2},{2.0, 2.1, 2.2}};

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            //visualizacao em linha
            //printf("Matriz na posicao %li.%li, valor = %f, endereco de memoria = %p\n", i,j, matriz[i][j], &matriz[i][j]);
            printf("%p\t", &matriz[i][j]);
        }
        //visualizacao em matriz
        printf("\n");
    }

    return 0;
}
