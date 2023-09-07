#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
    teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço. */

    int a, b;

    printf("Informe o valor de A: ");
    scanf("%i", &a);
    
    printf("Informe o valor de B: ");
    scanf("%i", &b);

    if (&a > &b)
    {
        printf("Endereco de A eh maior: %p\nValor contido em A: %i\n", &a, a);
    } else if (&b > &a)
    {
        printf("Endereco de B eh maior: %p\nValor contido em B: %i\n", &b, b);
    } else{
        printf("Enderecos iguais: %p", &a);
    }

    return 0;
}
