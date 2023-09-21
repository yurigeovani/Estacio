#include<stdio.h>
#include<stdlib.h>

//criação de struct
typedef struct no { // estrutura do tipo struct 
	int valor;
	struct no *prox; //ponteiro para o proximo
}lista;

//funções

lista *cria(){
	printf("Lista criada com sucesso\n");
	return NULL;
}

lista *insere_inicio(lista *l, int v){
	lista *novo=(lista*)malloc(sizeof(lista)); //criei um novo nó na lista do tamanho lista
	novo->valor=v;
	novo->prox=l;
	printf("inseri o valor %d  no inicio da lista \n ", v);
	return novo;
}

lista *insere_final(lista *l, int v){
	lista *novo=(lista*)malloc(sizeof(lista));
	novo->valor=v;
	novo->prox= NULL;
	if(l==NULL){
		return novo;
	}
	lista *atual=l;
	while (atual->prox !=NULL){
		atual= atual->prox;
	}
	atual->prox=novo;
	printf("Inseri o item %d no final da lista \n", v);
	return l;
	
}

lista *insere_posicao(lista *l, int v, int p){
	lista *novo= (lista*)malloc(sizeof(lista));
	novo->valor= v;
	
	if(p==1){
		novo->prox= l;
		return novo;
	}
	lista *atual=l;
	lista * anterior=NULL;
	int cont=1;
	
	while(atual!=NULL && cont<p){
		cont++;
		anterior=atual;
		atual= atual->prox;
	}
	
	if (cont!=p){
		printf("posicação invalida\n");
		free(novo);
		return l;
	}
	 anterior->prox=novo;
	 novo->prox=atual;
	 printf("Inseri o item %d na posicao %d da lista", v, p);
	 return l;
	
}

lista *deletar_inicio(lista *l){
	if(l==NULL){
		printf("Lista vazia \n");
		return NULL;
	}
	else {
		lista *temp= l;
		l=l->prox;
		free(temp);
		printf("Exclui o primeiro item da lista \n");
		return l;
	}
}

lista *deletar_final(lista *l){
	if(l==NULL){
		printf("Lista vazia\n");
		return NULL;
	}
	else if(l->prox==NULL){
		free(l);
		printf("Exclui o unico item que havia na lista");
		return NULL;
	}
	else {
		lista *atual = l;
		lista *anterior=NULL;
		while(atual->prox!=NULL){
			anterior=atual;
			atual=atual->prox;
		}
		anterior->prox=NULL;
		free(atual);
		printf("Exclui o ultimo item da lista");
		return l;
	}
	
}

lista *deletar_posicao(lista *l, int p){
	if(l==NULL){
		printf("Lista vazia \n");
		return NULL;
		
	}
	if (p==1){
		lista *temp= l;
		l=l->prox;
		free(temp);
		printf("Exclui o unico item da lista \n");
		return l;
	}
	lista *atual=l;
	lista *anterior=NULL;
	int cont=1;
	
	while(atual!=NULL &&cont<p){
		cont++;
		anterior=atual;
		atual= atual->prox;
	}
	if(cont!=p||atual==NULL){
	printf("posicao invalida\n");
	return l;
	}	
	
	anterior->prox=atual->prox;
	free(atual);
	printf("exclui o item da posição %d da lista \n",p);
	return l;
	
}

void ler_inicio(lista *l){
	lista *atual=l;
	printf("\nElementos da lista\n\n");
	while (atual!=NULL){
		printf("%d -> ",atual->valor);
		atual=atual->prox;
	}
	printf(" NULL\n");
}
void ler_final(lista *l) {
    if (l == NULL) {
        printf("Lista vazia\n");
        return;
    }
    
    // Caso base: Quando chegamos ao final da lista
    if (l->prox == NULL) {
        printf("%d -> ", l->valor);
        return;
    }
    
    // Chamada recursiva para percorrer o restante da lista
    ler_final(l->prox);

    // Impressão do elemento atual
    printf("%d -> ", l->valor);
}

int buscar(lista *l, int v){
	 if (l == NULL) {
        printf("Lista vazia\n");
        return 0;
    }
    
    lista *atual=l;
    int p=1;
    
    while(atual!=NULL){
    	if(atual->valor==v){
    		printf ("Econtrei o valor %d na posição %d da lista\n", v, p);
    		return 1;
		}
		atual=atual->prox;
		p++;
	}
	
	printf("O valor %d não foi encontrado \n", v);
	return 0;
}

int quantidade (lista *l){
	int cont = 0;
	lista *atual=l;
	while(atual!=NULL){
		cont++;
		atual= atual->prox;
	}
	printf("A lista tem %d elementos \n", cont);
	return cont;
}

//função principal
int main(){
	int op, valor, posicao;
	lista *mlista;
	
	mlista=cria();
	
	do{
		printf("\n \n Digite uma opcao: \n\n");
		printf("1- inserir no inicio \n");
		printf("2- inserir no final \n");
		printf("3- inserir em uma posicao especifica \n");
		printf("4- deletar no inicio \n");
		printf("5- Deletar no fim \n");
		printf("6- Deletar em uma posição especifica \n");
		printf("7- ler a lista do inicio ao fim \n");
		printf("8- Ler a lista do fim ao inicio \n");
		printf("9- Buscar elemento na lista \n");
		printf("10-  verificar quantidade de elementos na lista \n");
		printf("0 - Sair \n");
		scanf("%d",&op);
		
		
		switch (op){
			case 1: 
				mlista= insere_inicio(mlista, 15);
				break;	
			case 2: 
				printf("Digite o valor a ser inserido: ");
				scanf("%d", &valor);
				mlista= insere_final(mlista, valor);
				break;
			case 3:
				printf("Digite o valor a ser inserido: ");
				scanf("%d", &valor);
				printf("Digite a posição para inserir: ");
				scanf("%d", &posicao);
				mlista= insere_posicao(mlista, valor, posicao);
				break;
			case 4: 
				mlista= deletar_inicio(mlista);
				break;
		case 5:
				mlista= deletar_final(mlista);
				break;
			case 6: 
				printf("Digite a posição para deletar: ");
				scanf("%d", &posicao);
				mlista= deletar_posicao(mlista, posicao);
				break;
			case 7: 
				ler_inicio(mlista);
				break;
		case 8: 
				ler_final(mlista);
				break;
			case 9:
				printf("Digite o valor a ser buscado: ");
				scanf("%d", &valor);
				
				buscar(mlista, valor);
				break;
			case 10: 
				quantidade(mlista);
		
			case 0: break;
			default: 
				printf("opção invalida\n");
				

		}
		
		
		
	
		
		
		
	}while (op!=0);
	
}
