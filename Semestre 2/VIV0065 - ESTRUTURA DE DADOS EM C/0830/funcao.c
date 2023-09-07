#include<stdio.h>

float calcularMedia(float nota1, float nota2, float nota3){
    return (nota1+nota2+nota3)/3;
}

int main(int argc, char const *argv[])
{
    float nota1, nota2, nota3, media;

    printf("Digite sua nota: ");
    scanf("%f", &nota1);
    printf("Digite sua nota: ");
    scanf("%f", &nota2);
    printf("Digite sua nota: ");
    scanf("%f", &nota3);

    media = calcularMedia(nota1,nota2,nota3);

    printf("A media eh: %.2f\n", media);
    return 0;
}
