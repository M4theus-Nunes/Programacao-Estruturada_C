// Uma escola deseja criar um sistema para cadastrar alunos e verificar se são maiores de idade.
// Cada aluno tem um nome e uma idade. O nome pode ter no máximo 50 caracteres. Após cadastrar
// 4 alunos, o sistema deve exibir os nomes e idades dos alunos maiores de idade (18 anos ou mais).

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    char nome[50];
    int idade;
};

int main()
{

    struct Aluno alunos[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Nome aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Idade aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);
        printf("\n");
    }

    printf("Alunos de maior:\n");
    for (int i = 0; i < 4; i++)
    {
        if(alunos[i].idade >= 18){
        printf("Nome aluno %d: %s", i + 1, alunos[i].nome);
        printf("\nIdade aluno %d: %d", i + 1, alunos[i].idade);
        printf("\n\n");
    }
}

    return 0;
}