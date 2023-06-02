#include <stdio.h>
// #include <stdlib.h>

// struct Aluno
// {
//     int matricula;
//     char *nome;
// };

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
    // struct Aluno a1;
    char opcao;
    int test = 2;

    while (opcao)
    {
        printf("\n############## ESTACIOs ACADEMY ##############");
        printf("\nInforme a opcao desejada:");
        printf("\n1) Cadastro de alunos");
        printf("\n2) Listagem de alunos");
        printf("\n3) Calculo de media");
        // printf("\n4) Pesquisa de alunos");
        // printf("\n5) Atualizacao de dados");
        // printf("\n6) Remocao de alunos");
        printf("\n0) Sair");
        puts("\nOpcao: ");
        scanf("%s", &opcao);
        // printf("%i", validarOpcao(opcao));

        // opcao = validarOpcao(opcao);

        test = atoi(opcao);
        switch (test)
        {
        case 1:
            // a1.matricula = 123;
            // a1.nome = "Tests";
            // printf("\nUSUARIO CADASTRADO!\n\n");
            printf("\nop1");
            break;
        case 2:
            // printf("\n%i %s", a1.matricula, a1.nome);
            printf("\nop2");
            break;
        case 3:
            printf("\nop3");
            break;
        case 0:
            break;
        default:
            printf("\nSelecione uma opcao correta: %i !!!", test);
            break;
        }
    }
    return 0;
}
