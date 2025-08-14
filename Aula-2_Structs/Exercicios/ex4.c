// Defina uma estrutura Aluno com os campos nome, matrícula e 3 notas. Leia os dados de 5 alunos
// e calcule a média de cada um, indicando se está aprovado (média ≥ 7).

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    char nome[50];
    int matricula;
    int notas[3];
};

int main()
{
    struct Aluno alunos[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Nome aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Matricula aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        for (int j = 0; j < 3; j++)
        {
            printf("Nota %d: ", j + 1);
            scanf("%d", &alunos[i].notas[j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        float media = 0;
        float nota_total = 0;

        for (int j = 0; j < 3; j++)
        {
            nota_total += (float)alunos[i].notas[j];
        }

        media = nota_total / 3;

        printf("Nome aluno %d: %s", i + 1, alunos[i].nome);
        printf("\nMatricula: %d", alunos[i].matricula);
        printf("\nNota total: %.2f", nota_total);
        printf("\nMedia: %.2f", media);
        printf((media >= 7) ? "\nAprovado" : "\nReprovado");
        printf("\n\n");
    }

    return 0;
}