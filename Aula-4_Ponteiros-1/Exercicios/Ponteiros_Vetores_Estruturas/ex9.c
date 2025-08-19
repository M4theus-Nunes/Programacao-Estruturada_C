// Declare uma estrutura Pessoa com nome (vetor de char) e idade. Crie uma instância com
// alocação dinâmica e preencha os dados com scanf

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct Pessoa
{
    char nome[50];
    int idade;
};

int main()
{

    struct Pessoa *pessoa = calloc(1, sizeof(struct Pessoa));
    printf("Nome: ");
    scanf(" %[^\n]", pessoa->nome); // TATICA PRA NAO TER Q USAR FGETS 
    printf("Idade: ");
    scanf("%d", &pessoa->idade);

    printf("\nPessoa cadastrada:\n");
    printf("Nome: %s\n", pessoa->nome);
    printf("Idade: %d\n", pessoa->idade);

    free(pessoa);

    return 0;
}