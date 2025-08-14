// Crie duas estruturas: Endereço (rua, número, cidade) e Pessoa (nome, idade, endereço).
// Cadastre 3 pessoas e mostre seus dados completos. Use estruturas aninhadas.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Endereco
{
    char rua[50];
    int numero;
    char cidade[50];
};

struct Pessoa
{
    char nome[50];
    int idade;
    struct Endereco endereco;
};

int main()
{

    struct Pessoa pessoas[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Nome pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Idade pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Rua pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].endereco.rua);
        printf("Numero pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].endereco.numero);
        printf("Cidade pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].endereco.cidade);
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Nome pessoa %d: %s", i + 1, pessoas[i].nome);
        printf("\nIdade pessoa %d: %d", i + 1, pessoas[i].idade);
        printf("\nRua pessoa %d: %s", i + 1, pessoas[i].endereco.rua);
        printf("\nNumero pessoa %d: %d", i + 1, pessoas[i].endereco.numero);
        printf("\nRua pessoa %d: %s", i + 1, pessoas[i].endereco.rua);
        printf("\n");
    }

    return 0;
}