#include<stdio.h>

float somar(float x, float y){
    return x+y;
}
float sub(float x, float y){
    return x-y;
}
float mult(float x, float y){
    return x*y;
}
float div(float x, float y){
    return x/y;
}

int main(int argc, char const *argv[])
{
    float num1, num2;
    char op;

    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite um numero: ");
    scanf("%f", &num2);
    
    getchar();
    printf("Digite a operacao: ");
    scanf("%c", &op);

    switch (op)
    {
    case '+':
        printf("%f + %f = %.2f", num1, num2, somar(num1, num2));
        break;
    case '-':
        printf("%f + %f = %.2f", num1, num2, sub(num1, num2));
        break;
    case '*':
        printf("%f + %f = %.2f", num1, num2, mult(num1, num2));
        break;
    case '/':
        printf("%f + %f = %.2f", num1, num2, div(num1, num2));
        break;
    default:
        printf("Digite uma operação correta!");
        break;
    }

    printf("\n");
    return 0;
}
