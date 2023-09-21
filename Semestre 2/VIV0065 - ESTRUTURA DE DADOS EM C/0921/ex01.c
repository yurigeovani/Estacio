#include<stdio.h>
#include<stdlib.h>

typedef struct Lista
{
    int valor;
    struct Lista *prox;
}Lista;

// Lista *criar(){
    //printf("Lista criada com sucesso!"\n);
    //return NULL;
// }

Lista *insere_inicio(Lista *l, int v){
    Lista *novo =(Lista*)malloc(sizeof(Lista)) ;
    novo->valor=v;
    novo->prox=l;

    printf("Inseri o valor %d no inicio da lista \n", v);
    return novo;
}

Lista *insere_final(Lista *l, int v){
    Lista *novo =(Lista*)malloc(sizeof(Lista)) ;
    novo->valor=v;
    novo->prox=NULL;

    if(l==NULL)
        return novo;

    Lista *atual=l;

    while (atual->prox!=NULL)
    {
        atual = atual->prox;
    }

    atual->prox=novo;

    printf("Inseri o valor %d no final da lista \n", v);
    return l;
}

Lista *insere_posicao(Lista *l, int v, int p){
    Lista *novo =(Lista*)malloc(sizeof(Lista)) ;
    novo->valor=v;
    
    if(p==1){
        novo->prox=l;
        return novo;
    }
    Lista *atual = l;
    Lista *anterior = NULL;
    int cont=1;

    while (atual!=NULL && cont<p)
    {
        cont++;
        anterior = atual;
        atual=atual->prox;
    }
    
    if(cont!=p){
        printf("Posicao invalida!\n");
        free(novo);
        return l;
    }

    anterior->prox=novo;
    novo->prox=atual;
    printf("Inseri o item %d na posicao %d da lista!", v, p);
    return l;
}

Lista *deletar_inicio(Lista *l){
    if(l==NULL){
        printf("Lista vazia!\n");
        return NULL;
    } else {
        Lista *temp= l;
        l=l->prox;
        free(temp);
        printf("Exclui o primeiro item da lista!\n");

        return l;
    }
}

Lista *deletar_final(Lista *l){
    if(l==NULL){
        printf("Lista vazia!\n");
        return NULL;
    }else if (l->prox==NULL)
    {
        free(l);
        printf("Exclui o unico item que havia na lista!\n");
        return NULL;
    } else
    {
        Lista *atual = l;
        Lista *anterior = NULL;
        while (atual->prox==NULL)
        {
            anterior=atual;
            atual=atual->prox;
        }
        anterior->prox=NULL;
        free(atual);
        printf("Exclui o ultimo item da lista!\n");
        return l;
    }
}

Lista *deletar_posicao(Lista *l, int p){
    if(l==NULL){
        printf("Lista vazia!\n");
        return NULL;
    }
    if (p==1)
    {
        Lista *temp = l;
        l=l->prox;
        free(temp);
        printf("Exclui o unico item da lista!\n");
        return l;
    }

    Lista *atual=l;
    Lista *anterior=NULL;
    int cont=1;

    while (atual!=NULL && cont<p){
        cont++;
        anterior=atual;
        atual=atual->prox;
    }
    if (cont!=p || atual==NULL){
        printf("Posicao invalida!\n");
        return l;
    }
    
    anterior->prox=atual->prox;
    free(atual);
    printf("Exclui o item da posicao %d da lista!\n");
    return l;
}

void ler_inicio(Lista *l){
    Lista *atual = l;
    printf("Elementos da lista\n\n");
    while (atual!=NULL)
    {
        printf("%d -> ", atual->valor);
        atual=atual->prox;
    }
    printf("NULL");
}

void ler_final(Lista *l){
    if(l==NULL){
        printf("Lista vazia!\n");
    }

    Lista *atual = l;
    Lista *anterior= NULL;

    while (atual->prox!=NULL)
    {
        atual=atual->prox;
    }

    printf("Elementos da lista de tras pra frente\n\n");

    while (atual!=NULL)
    {
        printf("%d -> ", atual->valor);
        atual=anterior;
    }
}

int buscar (Lista *l, int v){
    if(l==NULL){
        printf("Lista vazia!\n");
        return NULL;
    }

    Lista *atual=l;
    int p=1;

    while (atual!=NULL)
    {
        if(atual->valor==v){
            printf("Encontrei o valor %d na posicao %d na lista!\n", v, p);
            return l;
        }
        atual=atual->prox;
        p++;
    }

    printf("O valor %d não foi encontrado!\n");

    return 0;
    
}

int buscar_quantidade(Lista *l){
    int cont = 0;

    Lista *atual = l;
    while(atual!=NULL){
        cont++;
        atual=atual->prox;
    }

    print("A lista tem %d elementos!\n", cont);

    return cont;
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

void selecionarOpcao(int opcao, Lista *mlista) {
    switch (opcao)
    {
    case 1:
        insere_inicio(mlista, 15);
        break;
    case 2:
        insere_final(mlista, 23);
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
        printf("Entrou no 7\n");
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
    int opcao, valorInserido;
    Lista *mlista;

    // mlista = cria();

    do
    {
        listarOpcoes();
        printf("\nDigite uma opcao: ");
        scanf("%d", &opcao);

        selecionarOpcao(opcao, mlista);
    } while (opcao!=0);

    return 0;
}
