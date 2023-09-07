#include<stdio.h>

float areaRetangulo(float base, float altura){
    return base*altura;
}

int main()
{
    float base, altura;

    printf("Informe a base do retangulo: ");
    scanf("%f", &base);
    printf("Informe a altura do retangulo: ");
    scanf("%f", &altura);

    printf("A area eh: %.2f\n", areaRetangulo(base, altura));
    return 0;
}
