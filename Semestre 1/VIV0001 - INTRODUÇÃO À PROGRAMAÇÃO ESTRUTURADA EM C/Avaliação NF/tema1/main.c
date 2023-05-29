#include<stdio.h>
#include<stdlib.h>

struct Aluno {
    int matricula;
    char *nome;
};


int main(int argc, char const *argv[])
{
    struct Aluno a1;
    int opcao = 1;

    while (opcao!=0)
    {
        printf("\n############## ESTACIO ACADEMY ##############");
        printf("\nInforme a opcao desejada:");
        printf("\n1) Cadastro de alunos");
        printf("\n2) Listagem de alunos");
        printf("\n3) Cálculo de média");
        printf("\n4) Pesquisa de alunos");
        printf("\n5) Atualização de dados");
        printf("\n6) Remoção de alunos");
        printf("\n0) Sair");
        printf("\nOpcao: ");
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 1:
            a1.matricula = 123;
            a1.nome = "Tests";
            printf("\nUSUARIO CADASTRADO!\n\n");
            break;
        case 2:
            printf("\n%i %s", a1.matricula, a1.nome);
        case 0:
            break;
        }
    }
    
    return 0;
}
