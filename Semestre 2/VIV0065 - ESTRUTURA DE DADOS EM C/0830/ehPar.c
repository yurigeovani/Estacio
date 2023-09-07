#include<stdio.h>

void ehPar (int num){
    if(num%2==0)
        printf("É par!\n");
    else
        printf("É ímpar!\n");
}

int main(int argc, char const *argv[])
{
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    ehPar(numero);
    return 0;
}
