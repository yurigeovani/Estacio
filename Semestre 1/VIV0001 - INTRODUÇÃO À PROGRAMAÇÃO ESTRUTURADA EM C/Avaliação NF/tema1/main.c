#include <stdio.h>
// #include <stdlib.h>

struct Aluno
{
    int matricula;
    char *nome;
};

// void listarOpcoes()
// {
// }

// char validarOpcao(int opcao){
//     if (isdigit(opcao)){
//         printf("entrou");
//         return opcao;
//     }
// }

int main()
{
    struct Aluno a1;
    char opcao;

    while (opcao!=48)
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
        printf("\nOpcao: ");
        scanf(" %c", &opcao);

        switch (opcao)
        {
        case 49:
            a1.matricula = 123;
            a1.nome = "Tests";
            printf("\nUSUARIO CADASTRADO!\n\n");
            break;
        case 50:
            printf("\n%i %s", a1.matricula, a1.nome);
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
    return 0;
}
