// Uma escola deseja criar um sistema para cadastrar alunos e verificar se são maiores de idade. Cada aluno tem um nome e uma idade. O
// nome pode ter no máximo 50 caracteres. Após cadastrar 4 alunos, o sistema deve exibir os nomes e idades dos alunos maiores de idade
// (18 anos ou mais).

#include <stdio.h>
#include <string.h>

const int QTD_ALUNOS = 4;

int main()
{

    char nome[QTD_ALUNOS][50];
    int idade[QTD_ALUNOS];

    printf(("Cadastro de alunos: \n\n"));

    for (int i = 0; i < QTD_ALUNOS; i++)
    {

        printf("Funcionario %d:\n", i + 1);
        printf("Nome: ");
        fgets(nome[i], sizeof(nome[i]), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0'; // Remove o \n

        printf("Idade: ");
        scanf("%d", &idade[i]);
        getchar();

        printf("\n");
    }

    printf("\n\nUsuarios maiores de idade:\n\n");

    for (int i = 0; i < QTD_ALUNOS; i++)
    {
        if (idade[i] >= 18)
        {
            printf("Funcionario %d:\n", i + 1);
            printf("Nome: %s\n", nome[i]);
            printf("Idade: %d\n", idade[i]);
            printf("\n\n");
        }
    }
    return 0;
}