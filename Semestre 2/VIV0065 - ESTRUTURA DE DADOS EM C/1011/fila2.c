#include<stdio.h>
#include<stdlib.h>

typedef struct no
{
    int valor;
    int prioridade;
    struct no *proximo;
} noFila;

noFila *criarFila(){
	printf("\nFila criada com sucesso...\n");
	return NULL;
}

noFila *enfileirar(noFila*  inicio, int v){
	noFila* novo = (noFila*)malloc(sizeof(noFila));
	novo->valor=v;
	novo->proximo= NULL;
	
	if(inicio==NULL){
		return novo;
	}
	else {
		noFila* atual=inicio;
		while(atual->proximo!=NULL){
			
			atual=atual->proximo;
		}
		atual->proximo= novo;
		return inicio;
	}
}

noFila *enfileirarPrioridade(noFila*  inicio, int v, int prioridade){
	noFila* novo = (noFila*)malloc(sizeof(noFila));
    novo->valor = v;
    novo->prioridade = prioridade;
    novo->proximo = NULL;

    if (inicio==NULL) {
        return novo;
    } else if (prioridade>inicio->prioridade){
        novo->proximo=inicio;
        return novo;
    } else {
        noFila *atual=inicio;
        while (atual->proximo!=NULL && prioridade<=atual->proximo->prioridade) {
            atual=atual->proximo;
        }
        novo->proximo = atual->proximo;
        atual->proximo=novo;

        return inicio;
    }
    
    
}

int main()
{
    int opcao, valor, prioridade;
	noFila* inicio = criarFila();

    do
    {
        printf("\n############### MENU ###############");
        printf("\n1 - Enfileirar");
        printf("\n2 - Enfileirar com prioridade");
        printf("\n3 - Desenfileirar");
        printf("\n4 - Verificar se a fila esta vazia");
        printf("\n5 - Contar elementos da fila");
        printf("\n6 - Imprimir a fila:");
        printf("\n0 - SAIR");

        printf("Informe a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0:
            break;
        case 1:
            printf("\nDigite o valor para inserir na fila: ");
            scanf("%d", &valor);
            inicio = enfileirar(inicio, valor);
            break;
        case 2:
            printf("\nDigite o valor para inserir na fila: ");
            scanf("%d", &valor);
            printf("\nDigite a prioridade: ");
            scanf("%d", &prioridade);
            inicio = enfileirarPrioridade(inicio, valor, prioridade);
            break;
        case 3:
            inicio = desenfileirar(inicio);
            break;
        case 4:
            if (estaVazia(inicio)) {
                printf("\nFila esta vazia!\n");
            } else {
                printf("\nNao esta vazia!\n");
            }
            break;
        case 5:
            printf("O numero de elementos na fila: %d", contarElementos(fila));
            break;
        case 6:
            lerFila(inicio);
            break;
        default:
            printf("\nOpcao invalida! Digite novamente!\n");
            break;
        }
    } while (opcao!=0);

    printf("\n");
    return 0;
}
