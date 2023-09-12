#include<stdio.h>
#include<string.h>

    /* Elabore uma função que receba duas strings como parâmetros e verifique se a segunda 
    string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres 
    das strings. */

//char *strstr(const char *haystack, const char *needle)
void *procuraString (char *s1, char *s2){
    if (strstr(s1, s2))
        printf("String encontrada: %s\n", s2);
    else
        printf("String nao encontrada.\n");
}

int main(int argc, char const *argv[])
{
    char *s1 = "Teste";
    char *s2 = "Te";

    procuraString(s1, s2);
    return 0;
}
