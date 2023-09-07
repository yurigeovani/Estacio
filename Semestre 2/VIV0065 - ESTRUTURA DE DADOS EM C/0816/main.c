#include<stdio.h>

float main(int argc, char const *argv[])
{
    float nota[3];
    float soma=0;

    char letra[5] = {'a', 'b', 'c', 'd', 'e'};

    printf("%s\n", letra);

    for (size_t i = 0; i < 3; i++)
    {
        printf("Entre com a nota: ");
        scanf("%f", &nota[i]);
        soma+=nota[i];
    }

    printf("A soma é: %.2f\n", soma);

    printf("A media é: %.2f", soma/3);
    return 0;
}
