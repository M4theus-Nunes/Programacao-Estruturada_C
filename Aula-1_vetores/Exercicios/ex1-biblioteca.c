// Uma livraria deseja desenvolver um sistema para cadastrar livros. Cada livro possui um título, um autor e o ano de publicação. No entanto,
// o sistema deve garantir que os usuários não insiram mais caracteres do que os permitidos nos campos de título e autor (100 e 50 caracteres,
// respectivamente). Implemente o sistema que permita o cadastro de 3 livros e garanta que as entradas do usuário não excedam os limites
// permitidos. Em seguida, exiba as informações dos livros cadastrados

#include <stdio.h>
#include <string.h>

int main()
{
    char titulo[3][100];
    char autor[3][50];
    int ano_publicacao[3];

    printf("Cadastro dos livros: \n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Livro %d:\n", i + 1);

        printf("Titulo: ");
        fgets(titulo[i], sizeof(titulo[i]), stdin);

        printf("Autor: ");
        fgets(autor[i], sizeof(autor[i]), stdin);

        printf("Ano publicacao: ");
        scanf("%d", &ano_publicacao[i]);
        getchar();
        printf("\n\n");
    }

    printf("Leitura dos livros: \n\n");
    for (int j = 0; j < 3; j++)
    {
        printf("Livro %d:\n", j + 1);
        printf("Titulo: %s\n", titulo[j]);
        printf("Autor: %s\n", autor[j]);
        printf("Ano publicacao: %d\n", ano_publicacao[j]);
        printf("\n\n");
    }

    return 0;
}