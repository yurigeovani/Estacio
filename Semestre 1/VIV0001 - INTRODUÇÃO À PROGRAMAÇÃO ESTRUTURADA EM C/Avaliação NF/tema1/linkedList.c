#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Aluno
{
    int matricula, idade;
    char nome[100], genero;
    float media;
    struct Aluno *next;


} Aluno;

Aluno *createAluno(Aluno *aluno, int matricula){
    char temp;

    aluno->matricula = matricula;
    printf("\nMATRICULA: %d\n", aluno->matricula);
    scanf("%c", &temp); // instrucao temporaria pra limpar o buffer apos int e ENTER
    printf("NOME: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    aluno->nome[strlen(aluno->nome) - 1] = '\0'; // remove o \n do ultimo valor do array, dado pelo fgets

    aluno->idade = -1;
    while (aluno->idade <= 0 || aluno->idade > 120)
    {
        printf("IDADE: ");
        scanf("%d", &aluno->idade);

        if(aluno->idade <= 0 || aluno->idade > 120)
            printf("\nEntrada invalida! Informe uma idade válida.\n");
    }

    aluno->genero = -1;
    while (aluno->genero != 70 && aluno->genero != 77 && 
            aluno->genero != 102 && aluno->genero != 109 && 
            aluno->genero != 111 && aluno->genero != 79)
    {
        printf("GENERO (m/f/o): ");
        scanf(" %c", &aluno->genero);

        if(aluno->genero != 70 && aluno->genero != 77 && 
            aluno->genero != 102 && aluno->genero != 109 && 
            aluno->genero != 111 && aluno->genero != 79)
            printf("\nEntrada invalida! Informe M para masculino, F para feminino, O para outros.\n");
    }

    aluno->media = -1;
    while (aluno->media < 0 || aluno->media > 10)
    {
        printf("MEDIA: ");
        scanf("%f", &aluno->media);

        if(aluno->media < 0 || aluno->media > 10)
            printf("\nEntrada invalida! Informe uma media válida.\n");
    }

    return aluno;
}

Aluno *addAluno(Aluno *aluno){
    int i = 1;
    Aluno *next = NULL;

    aluno = (Aluno *)malloc(sizeof(Aluno));
    Aluno *current = aluno;

    while (current != NULL)  //verifica a próxima matricula livre
    {
        i++;
    }

    aluno = createAluno(aluno, i);
    aluno->next = next;
    printf("\nAluno cadastrado!\n");
    return aluno;
}

Aluno *updateAlunoByMatricula(Aluno *alunos){
    int matricula;
    printf("\nInforme a matricula: ");
    scanf("%d", &matricula);

    alunos = createAluno(alunos, matricula);
    printf("\nAluno atualizado!\n");
    return alunos;
}

Aluno *deleteAlunoByMatricula(Aluno *alunos){
    int i, matricula;
    printf("\nInforme a matricula: ");
    scanf("%d", &matricula);

    i = matricula-1;

    strcpy(alunos[i].nome,"DESATIVADO");

    printf("\nAluno removido!\n");
    return alunos;
}

void listAllAlunos (Aluno *alunos){
    int i = 0;
    int qtdAlunosMatriculados = 0;
    printf("\n############## ALUNOS ##############");
    while (alunos[i].matricula)
    {
        if(strcmp(alunos[i].nome,"DESATIVADO"))
        {
            printf("\nMATRICULA: %i", alunos[i].matricula);
            printf("\nNOME: %s", alunos[i].nome);
            printf("\nIDADE: %i", alunos[i].idade);
            if (alunos[i].genero==109 || alunos[i].genero==77)
            {
                printf("\nGENERO: Masculino");
            } else if (alunos[i].genero==102 || alunos[i].genero==70)
            {
                printf("\nGENERO: Feminino");
            } else {
                printf("\nGENERO: Outros");
            }
            printf("\nMEDIA: %.2f\n", alunos[i].media);
            qtdAlunosMatriculados++;
        }
        i++;
    }

    if(qtdAlunosMatriculados==0)
        printf("\nNenhum aluno cadastrado!\n");
}

void listAlunoByMatricula (Aluno *alunos){
    int i = 0;
    int matricula;
    printf("\nInforme a matricula: ");
    scanf("%d", &matricula);

    while (alunos[i].matricula && alunos[i].matricula != matricula)
    {
        i++;
    }

    if (!strcmp(alunos[i].nome,"DESATIVADO") || matricula == 0 || alunos[i].matricula != matricula) {
        printf("\nMatricula nao encontrada!\n");
    } else if (alunos[i].matricula == matricula)
    {
        printf("\nMATRICULA: %i", alunos[i].matricula);
        printf("\nNOME: %s", alunos[i].nome);
        printf("\nIDADE: %i", alunos[i].idade);
        if (alunos[i].genero == 109 || alunos[i].genero == 77)
        {
            printf("\nGENERO: Masculino");
        }
        else if (alunos[i].genero == 102 || alunos[i].genero == 70)
        {
            printf("\nGENERO: Feminino");
        }
        else
        {
            printf("\nGENERO: Outros");
        }
        printf("\nMEDIA: %.2f\n", alunos[i].media);
    }
}

void mediaGeral (Aluno *alunos){
    float mediaGeral = 0;
    int i = 0;
    int qtdAlunos = 0;

    printf("\n############## MEDIA GERAL ##############");
    while (alunos[i].matricula)
    {
        if(strcmp(alunos[i].nome,"DESATIVADO"))
        {
            mediaGeral += alunos[i].media;
            qtdAlunos++;
        }
        i++;
    }

    if(qtdAlunos==0)
        printf("\nNenhum aluno cadastrado!\n");
    else{
        mediaGeral /= qtdAlunos;
        printf("\nMedia geral: %.2f\n", mediaGeral);
    }
}

void listarOpcoes()
{
    printf("\n############## ESTACIO ACADEMY ##############");
    printf("\nInforme a opcao desejada:");
    printf("\n1) Cadastro de alunos");
    printf("\n2) Listagem de alunos");
    printf("\n3) Calculo de media");
    printf("\n4) Pesquisa de alunos por matricula");
    printf("\n5) Atualizacao de dados");
    printf("\n6) Remover aluno por matricula");
    printf("\n0) Sair");
}

char digitarOpcao (char opcao){
    printf("\nOpcao: ");
    scanf(" %c", &opcao);
    return opcao;
}

void selecionarOpcao(char opcao, Aluno *aluno) {
    switch (opcao) {
    case 49:
        aluno = addAluno(aluno);
        break;
    case 50:
        listAllAlunos(aluno);
        break;
    case 51:
        mediaGeral(aluno);
        break;
    case 52:
        listAlunoByMatricula(aluno);
        break;
    case 53:
        aluno = updateAlunoByMatricula(aluno);
        break;
    case 54:
        aluno = deleteAlunoByMatricula(aluno);
        break;
    case 48:
        break;
    default:
        printf("\nSelecione uma opcao correta!!!\n");
        break;
    }
}

int main()
{
    Aluno *aluno = NULL;
    char opcao = 49;

    while (opcao != 48)
    {
        listarOpcoes();
        opcao = digitarOpcao(opcao);
        selecionarOpcao(opcao, aluno);
    }
    return 0;
}










/*int main()
{
    Aluno *head = NULL;
    Aluno *second = NULL;
    Aluno *third = NULL;

    head = (Aluno *)malloc(sizeof(Aluno));
    second = (Aluno *)malloc(sizeof(Aluno));
    third = (Aluno *)malloc(sizeof(Aluno));

    head->matricula = 1;
    strcpy(head->nome,"Joao");
    head->next = second;

    second->matricula = 2;
    strcpy(second->nome,"Pedro");
    second->next = third;

    third->matricula = 1;
    strcpy(third->nome,"Tiago");
    third->next = NULL;

    Aluno *current = head;

    while (current != NULL)
    {
        printf("\n%d\t%s", current->matricula, current->nome);
        current = current->next;
    }

    printf("\n");

    free(head);
    free(second);
    free(third);
    
    return 0;
}
*/