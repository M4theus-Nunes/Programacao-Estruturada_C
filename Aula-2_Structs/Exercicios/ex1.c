// Crie uma estrutura Pessoa com nome e idade. Leia os dados de duas pessoas e exiba quem é a
// mais velha, usando funções para comparar e imprimir o resultado.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Pessoa
{
    char nome[50];
    int idade;
};

void comparar_mais_velho(struct Pessoa pessoa1, struct Pessoa pessoa2);

int main()
{
    struct Pessoa pessoa1;
    struct Pessoa pessoa2;

    printf("Nome pessoa 1: ");
    scanf("%s", pessoa1.nome);
    printf("Idade pessoa 1: ");
    scanf("%d", &pessoa1.idade);
    printf("\nNome pessoa 2: ");
    scanf("%s", pessoa2.nome);
    printf("Idade pessoa 2: ");
    scanf("%d", &pessoa2.idade);
    printf("\n");

    printf("Mais velho:\n");
    comparar_mais_velho(pessoa1, pessoa2);

    return 0;
}

void comparar_mais_velho(struct Pessoa pessoa1, struct Pessoa pessoa2)
{
    if (pessoa1.idade > pessoa2.idade)
    {
        printf("Nome: %s", pessoa1.nome);
        printf("\nIdade: %d", pessoa1.idade);
    }
    else
    {
        printf("Nome: %s", pessoa2.nome);
        printf("\nIdade: %d", pessoa2.idade);
    }
}