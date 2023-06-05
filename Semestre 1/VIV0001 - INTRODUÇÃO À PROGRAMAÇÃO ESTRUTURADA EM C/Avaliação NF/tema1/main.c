#include <stdio.h>

struct Aluno
{
    int matricula;
    char *nome;
    int idade;
    char genero; // m or f or o
    float media;
};

void adicionarAluno (){
    struct Aluno aluno;
    printf("MATRICULA: ");
    scanf("%i", &aluno.matricula);
    printf("NOME: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);  // read string
    // scanf(" %s", aluno.nome);
    printf("IDADE: ");
    scanf("%i", &aluno.idade);
    printf("GENERO: ");
    scanf("%c", &aluno.genero);
    printf("MEDIA: ");
    scanf("%f", &aluno.media);
    
    printf("\nALUNO CADASTRADO COM SUCESSO!\n");
    printf("\tMATRICULA: %i\n", aluno.matricula);
    printf("\tNOME: %s\n", aluno.nome);
    printf("\tIDADE: %i\n", aluno.idade);
    printf("\tGENERO: %c\n", aluno.genero);
    printf("\tMEDIA: %f\n", aluno.media);
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

char selecionarOpcao(char opcao) {
    switch (opcao) {
    case 49:
        adicionarAluno();
        break;
    case 50:
        // printf("%i %s\n\n", aluno.matricula, aluno.nome);
        break;
    case 51:
        printf("\nop3");
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
    // struct Aluno aluno;
    char opcao;

    while (opcao!=48)
    {
        listarOpcoes();
        opcao = digitarOpcao(opcao);
        selecionarOpcao(opcao);
    }
    return 0;
}
