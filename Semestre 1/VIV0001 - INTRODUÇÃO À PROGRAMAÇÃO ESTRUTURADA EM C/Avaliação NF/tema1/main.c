#include<stdio.h>
#include<string.h>

typedef struct Aluno
{
    int matricula, idade;
    char nome[100], genero;
    float media;
} Aluno;

Aluno *createAluno(Aluno *alunos, int matricula){
    char temp;
    int i = matricula-1;

    alunos[i].matricula = matricula;
    printf("\nMATRICULA: %d\n", alunos[i].matricula);
    scanf("%c", &temp); // instrucao temporaria pra limpar o buffer apos int e ENTER
    printf("NOME: ");
    fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
    alunos[i].nome[strlen(alunos[i].nome) - 1] = '\0'; // remove o \n do ultimo valor do array, dado pelo fgets

    alunos[i].idade = -1;
    while (alunos[i].idade <= 0 || alunos[i].idade > 120)
    {
        printf("IDADE: ");
        scanf("%d", &alunos[i].idade);

        if(alunos[i].idade <= 0 || alunos[i].idade > 120)
            printf("\nEntrada invalida! Informe uma idade válida.\n");
    }

    alunos[i].genero = -1;
    while (alunos[i].genero != 70 && alunos[i].genero != 77 && 
            alunos[i].genero != 102 && alunos[i].genero != 109 && 
            alunos[i].genero != 111 && alunos[i].genero != 79)
    {
        printf("GENERO (m/f/o): ");
        scanf(" %c", &alunos[i].genero);

        if(alunos[i].genero != 70 && alunos[i].genero != 77 && 
            alunos[i].genero != 102 && alunos[i].genero != 109 && 
            alunos[i].genero != 111 && alunos[i].genero != 79)
            printf("\nEntrada invalida! Informe M para masculino, F para feminino, O para outros.\n");
    }

    alunos[i].media = -1;
    while (alunos[i].media < 0 || alunos[i].media > 10)
    {
        printf("MEDIA: ");
        scanf("%f", &alunos[i].media);

        if(alunos[i].media < 0 || alunos[i].media > 10)
            printf("\nEntrada invalida! Informe uma media válida.\n");
    }

    return alunos;
}

Aluno *addAluno(Aluno *alunos){
    int i = 0;

    while (alunos[i].matricula) //verifica a próxima matricula livre
    {
        i++;
    }

    alunos = createAluno(alunos, i+1);
    printf("\nAluno cadastrado!\n");
    return alunos;
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

void selecionarOpcao(char opcao, Aluno *alunos) {
    switch (opcao) {
    case 49:
        alunos = addAluno(alunos);
        break;
    case 50:
        listAllAlunos(alunos);
        break;
    case 51:
        mediaGeral(alunos);
        break;
    case 52:
        listAlunoByMatricula(alunos);
        break;
    case 53:
        alunos = updateAlunoByMatricula(alunos);
        break;
    case 54:
        alunos = deleteAlunoByMatricula(alunos);
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
    Aluno alunos[100];
    char opcao = 49;

    while (opcao != 48)
    {
        listarOpcoes();
        opcao = digitarOpcao(opcao);
        selecionarOpcao(opcao, alunos);
    }
    return 0;
}