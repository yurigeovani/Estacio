#include<stdio.h>

int somaNumerosNaturais(int numero){
    if (numero==1)
        return numero;
    else
        return (numero+somaNumerosNaturais(numero-1));
}

int main(int argc, char const *argv[])
{
    int numero;
    printf("Informe um numero positivo: ");
    scanf("%d", &numero);

    printf("%d\n", somaNumerosNaturais(numero));
    return 0;
}
