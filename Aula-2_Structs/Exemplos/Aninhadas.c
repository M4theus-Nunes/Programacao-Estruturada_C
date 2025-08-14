#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Endereco
{
    char rua[50];
    int numero;
    char cidade[50];
    char estado[2];
};

struct Pessoa
{
    char nome[50];
    int idade;
    struct Endereco endereco; // Struct aninhada dentro da struct Pessoa
};

int main()
{

    struct Pessoa pessoa1;

    strcpy(pessoa1.nome, "João Silva");
    pessoa1.idade = 25;
    strcpy(pessoa1.endereco.rua, "Rua das Flores");
    pessoa1.endereco.numero = 123;
    strcpy(pessoa1.endereco.cidade, "São Paulo");
    strcpy(pessoa1.endereco.estado, "SP");

    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %s\n", pessoa1.idade);
    printf("Endereco: %s\n", pessoa1.endereco.rua, pessoa1.endereco.numero, pessoa1.endereco.cidade, pessoa1.endereco.estado);
    printf("Nome: %s\n", pessoa1.nome);

    return 0;
}