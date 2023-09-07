#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1;
    int num2 = 5;

    printf("Digite um valor: ");
    scanf("%d", &num1);

    printf("\n***\n");
    printf("O numero 1 eh: %d e o numero 2 eh: %d\n", num1, num2);

    printf("%ls", &num1);
    return 0;
}
