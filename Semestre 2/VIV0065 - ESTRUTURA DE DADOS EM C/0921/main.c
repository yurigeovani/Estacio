#include<stdio.h>
#include<stdlib.h>

typedef struct Lista {
    int valor;
    struct Lista *prox;
} Lista;

Lista *novaLista(int valor){
    Lista *nova =(Lista*)malloc(sizeof(Lista)) ;
    nova->valor = valor;
    nova->prox = NULL;
    return nova;
}

Lista *inserirInicio (Lista *lista){
/*
    Lista *novo=novaLista(valor);
    novo->prox = lista;

    printf("%d adicionado\n", novo->valor); */
    int valor;
    printf("Informe o valor a ser inserido no inicio da lista: ");
    scanf("%d", &valor);

    Lista *novo =(Lista*)malloc(sizeof(Lista)) ;
    novo->valor=valor;
    novo->prox=lista;

    printf("Inseri o valor %d no inicio da lista \n", valor);
    return novo;


    return novo;
}

Lista *listaVazia (Lista *lista){
    if (lista==NULL)
    {
        printf("Lista vazia!\n");
        return NULL;
    } else {
        return lista;
    }
}

void lerInicioFim(Lista *lista){
/*         printf("Elementos da lista: \n");
        while (lista!=NULL)
        {
            printf("%d -> ", lista->valor);
            lista = lista->prox;
        }
        printf("\n");
 *//*     if (!listaVazia(lista))
    {
    } else
    {
        listaVazia(lista);
    }
  */   

    Lista *atual = lista;
    printf("Elementos da lista\n\n");
    while (atual!=NULL)
    {
        printf("%d -> ", atual->valor);
        atual=atual->prox;
    }
    printf("NULL");

}

int digitarOpcao (int opcao){
    printf("\nOpcao: ");
    scanf(" %d", &opcao);
    return opcao;
}

void listarOpcoes () {
    printf("################### MENU ###################\n");
    printf("1 - Inserir no inicio\n");
    printf("2 - Inserir no fim\n");
    printf("3 - Inserir em uma posicao especifica\n");
    printf("4 - Deletar no inicio\n");
    printf("5 - Deletar no fim\n");
    printf("6 - Deletar em uma posicao especifica\n");
    printf("7 - Ler a lista do inicio ao fim\n");
    printf("8 - Ler a lista do fim ao inicio\n");
    printf("9 - Buscar elemento na lista\n");
    printf("10 - Verificar quantidade de elementos na lista\n");
    printf("0 - Sair\n");
}

void selecionarOpcao(int opcao, Lista *lista) {
    switch (opcao)
    {
    case 1:
        lista = inserirInicio(lista);
        break;
    case 2:
        printf("Entrou no 2\n");
        break;
    case 3:
        printf("Entrou no 3\n");
        break;
    case 4:
        printf("Entrou no 4\n");
        break;
    case 5:
        printf("Entrou no 5\n");
        break;
    case 6:
        printf("Entrou no 6\n");
        break;
    case 7:
        lerInicioFim(lista);
        break;
    case 8:
        printf("Entrou no 8\n");
        break;
    case 9:
        printf("Entrou no 9\n");
        break;
    case 10:
        printf("Entrou no 10\n");
        break;
    case 0:
        printf("SAIR!\n");
        break;
    default:
        printf("Opcao invalida! Digite uma opcao valida!\n");
        break;
    }
}

int main(int argc, char const *argv[])
{
    int opcao=1;
    Lista *lista;

    while (opcao != 0)
    {
        listarOpcoes();
        opcao = digitarOpcao(opcao);
        selecionarOpcao(opcao, lista);
    }

    return 0;
}
