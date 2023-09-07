#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e
    exiba o maior endereço. */

    int a,b;

    if (&a > &b)
    {
        printf("Endereco de A eh maior: %p\n", &a);
    } else if (&b > &a)
    {
        printf("Endereco de B eh maior: %p\n", &b);
    } else{
        printf("Enderecos iguais: %p", &a);
    }

    return 0;
}
