#include <stdio.h>

void calculaValor(int *a, int *b) {
    *a = *a + *b;
}

int main(int argc, char const *argv[])
{
    /* Crie um programa que contenha uma função que permita passar por parâmetro dois
    números inteiros A e B. A função deverá calcular a soma entre esses dois números e
    armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá
    modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal. */

    int a, b;

    printf("Informe o valor de A: ");
    scanf("%i", &a);
    
    printf("Informe o valor de B: ");
    scanf("%i", &b);

    printf("Antes da comparacao\n");
    printf("A = %i\n", a);
    printf("B = %i\n", b);

    calculaValor(&a, &b);

    printf("Depois da comparacao\n");
    printf("A = %i\n", a);
    printf("B = %i\n", b);

    return 0;
}
