#include<stdio.h>
#include<stdlib.h>

typedef struct Fila {
    int valor;
    struct Fila* proximo;
} Fila;

Fila *criarFila(){
    return NULL;
}

Fila *enfileirar(Fila *fila, int valor){
    Fila *novo = (Fila*)malloc(sizeof(Fila));
    novo->valor = valor;
    novo->proximo = NULL;

    if (fila==NULL) {
        return novo;
    } else {
        Fila *temp = fila;
        while (temp->proximo==NULL) {
            temp = temp->proximo;
        }
        temp->proximo = novo;

        return fila;
    }
}

Fila *desenfileirar(Fila *fila){
    if(fila==NULL){
        printf("\nFila vazia!");
        return NULL;
    } else {
        Fila *temp = fila;
        fila  = fila->proximo;
        free(temp);
        return fila;
    }
}

int estaVazia(Fila *fila){
    return fila == NULL;
}

int contarElementos(Fila *fila) {
    int cont=0;
    Fila *temp = fila;

    while (temp!=NULL)
    {
        cont++;
        temp=temp->proximo;
    }
    return cont;
}

void lerFila(Fila *fila){
    if(fila==NULL){
        printf("Fila vazia\n");
        return;
    }
    Fila *temp = fila;
    printf("\nElementos da fila:\n");
    while (temp!=NULL)
    {
        printf("%d - ", temp->valor);
        temp = temp->proximo;
    }
    printf("NULL\n");
}

int main()
{
    int opcao;
    int valor;

    Fila *fila = criarFila();

    do {
        printf("\n############## MENU ##############");
        printf("\n1 - Enfileirar");
        printf("\n2 - Desenfileirar");
        printf("\n3 - Verificar se a fila esta vazia");
        printf("\n4 - Contar elementos da fila");
        printf("\n5 - Imprimir a fila:");
        printf("\n0 - SAIR\n");

        printf("Informe a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0:
            break;
        case 1:
            printf("\nDigite o valor para inserir na fila: ");
            scanf("%d", &valor);
            fila = enfileirar(fila, valor);
            break;
        case 2:
            fila = desenfileirar(fila);
            break;
        case 3:
            if (estaVazia(fila)) {
                printf("\nFila esta vazia!\n");
            } else {
                printf("\nNao esta vazia!\n");
            }
            break;
        case 4:
            printf("O numero de elementos na fila: %d", contarElementos(fila));
            break;
        case 5:
            lerFila(fila);
            break;
        default:
            printf("\nOpcao invalida! Digite novamente!\n");
            break;
        }
    } while (opcao!=0);
    
    return 0;
}
