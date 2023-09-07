#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
    real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada
    variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação. */

    int i;
    float f;
    char c;

    int *pi = &i;
    float *pf = &f;
    char *pc = &c;

    printf("i = %i\n", i);
    *pi = 10;
    printf("i = %i\n", i);

    
    printf("f = %f\n", f);
    *pf = 10.6;
    printf("i = %f\n", f);

    printf("c = %c\n", c);
    *pc = 'c';
    printf("c = %c\n", c);

    return 0;
}
