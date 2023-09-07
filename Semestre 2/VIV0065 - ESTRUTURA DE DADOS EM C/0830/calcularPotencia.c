#include<stdio.h>

int calcularPotencia(int base, int expoente){
    if(expoente==0)
        return 1;
    else
        return base*calcularPotencia(base, expoente-1);
}

int main(int argc, char const *argv[])
{
    int base, expoente;
    printf("Informe a base: ");
    scanf("%d", &base);
    printf("Informe o expoente positivo: ");
    scanf("%d", &expoente);

    printf("%d\n", calcularPotencia(base, expoente));
    return 0;
}
