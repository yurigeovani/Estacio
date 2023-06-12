#include<stdio.h>
#include<string.h>

typedef struct Aluno
{
    int matricula, idade;
    char nome[100], genero;
    float media;
} Aluno;

Aluno *criarAluno(Aluno *alunos){
    char temp;
    int i;

    while (alunos[i].matricula) //verifica a próxima matricula livre
    {
        i++;
    }

    alunos[i].matricula = i+1;
    printf("MATRICULA: %d\n", alunos[i].matricula);
    // scanf("%d", &aluno->matricula);
        scanf("%c", &temp); // instrucao temporaria pra limpar o buffer apos int e ENTER
    printf("NOME: ");
    fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strlen(alunos[i].nome)-1] = '\0'; // remove o \n do ultimo valor do array, dado pelo fgets

    while (alunos[i].idade <= 0 || alunos[i].idade > 120)
    {
        printf("IDADE: ");
        scanf("%d", &alunos[i].idade);

        if(alunos[i].idade <= 0 || alunos[i].idade > 120)
            printf("\nEntrada invalida! Informe uma idade válida.\n");
    }

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

void listAllAlunos (Aluno *alunos){
    int i = 0;
    printf("\n############## ALUNOS ##############");
    while (alunos[i].matricula)
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
        i++;
    }
}

void mediaGeral (Aluno *alunos){
    float mediaGeral;
    int i = 0;

    printf("\n############## MEDIA GERAL ##############");
    while (alunos[i].matricula)
    {
        mediaGeral += alunos[i].media;
        i++;
    }

    mediaGeral /= i;

    printf("\nMedia geral: %.2f\n", mediaGeral);
}

void listarOpcoes()
{
    printf("\n############## ESTACIO ACADEMY ##############");
    printf("\nInforme a opcao desejada:");
    printf("\n1) Cadastro de alunos");
    printf("\n2) Listagem de alunos");
    printf("\n3) Calculo de media");
    printf("\n4) Pesquisa de alunos");
    printf("\n5) Atualizacao de dados");
    printf("\n6) Remocao de alunos");
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
        alunos = criarAluno(alunos);
        break;
    case 50:
        listAllAlunos(alunos);
        break;
    case 51:
        mediaGeral(alunos);
        break;
    case 52:
        printf("\nPesquisa por matricula");
        break;
    case 53:
        printf("\nUpdate");
        break;
    case 54:
        printf("\nDelete");
        break;
    case 48:
        break;
    default:
        printf("\nSelecione uma opcao correta!!!");
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