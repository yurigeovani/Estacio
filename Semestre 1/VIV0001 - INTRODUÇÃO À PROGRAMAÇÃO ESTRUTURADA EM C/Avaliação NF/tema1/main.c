#include<stdio.h>
#include<ctype.h>

struct Aluno {
    int matricula;
    char *nome;
};

void listarOpcoes(){
    printf("\n############## ESTACIO ACADEMY ##############");
    printf("\nInforme a opcao desejada:");
    printf("\n1) Cadastro de alunos");
    printf("\n2) Listagem de alunos");
    printf("\n3) Calculo de media");
    printf("\n4) Pesquisa de alunos");
    printf("\n5) Atualizacao de dados");
    printf("\n6) Remocao de alunos");
    printf("\n0) Sair");
    puts("\nOpcao: ");
}

// char validarOpcao(int opcao){
//     if (isdigit(opcao)){
//         printf("entrou");
//         return opcao;    
//     }
// }

int main(int argc, char const *argv[])
{
    struct Aluno a1;
    int opcao = 1;

    while (opcao)
    {
        listarOpcoes();
        scanf("%c", &opcao);
        // printf("%i", validarOpcao(opcao));
        
        // opcao = validarOpcao(opcao);

        switch (opcao)
        {
        case 1:
            a1.matricula = 123;
            a1.nome = "Tests";
            printf("\nUSUARIO CADASTRADO!\n\n");
            break;
        case 2:
            printf("\n%i %s", a1.matricula, a1.nome);
            break;
        case 0:
            break;
        default:
            printf("\nSelecione uma opcao correta!");
            break;
        }
        opcao=90;
    }
    return 0;
}
