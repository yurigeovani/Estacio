#include<stdio.h>
#include<stdlib.h>

typedef struct Registro {
    int valor;
    struct Registro *proximo;
} Registro;

Registro *novoRegistro (int valor) {
    Registro *registro = (Registro *)malloc(sizeof(Registro));
    registro->valor = valor;
    registro->proximo = NULL;
    return registro;
};

void inserirCabeca (Registro **cabeca, int valor){
    Registro *registro = novoRegistro(valor);
    registro->proximo = *cabeca;
    *cabeca = registro;
}

void imprimirLista (Registro *cabeca){
    Registro *atual = cabeca;
    while (atual != NULL)
    {
        printf("%d, ", atual->valor);
        atual = atual->proximo;
    }

    printf("NULL\n");
}

int main()
{
    Registro *cabeca = NULL;

    inserirCabeca(&cabeca, 14);
    inserirCabeca(&cabeca, 17);
    inserirCabeca(&cabeca, 2);

    printf("Lista:\n");
    imprimirLista(cabeca);

    //6 - deletar em uma posição
    cabeca = deletarEmUmaPosicao();

    while (cabeca!=NULL)
    {
        Registro *temp = cabeca;
        cabeca = cabeca->proximo;
        free(temp);
    }

    return 0;
}

