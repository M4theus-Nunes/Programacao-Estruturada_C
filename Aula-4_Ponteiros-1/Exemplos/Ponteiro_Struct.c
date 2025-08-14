#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Pessoa
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    // Declaração de uma variável do tipo Pessoa
    struct Pessoa pessoal;

    // Preenchendo os dados da pessoal
    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoal.nome);
    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoal.idade);  // Corrigido: adicionado &
    printf("Digite a altura da pessoa: ");
    scanf("%f", &pessoal.altura);  // Corrigido: adicionado &

    // Usando ponteiros para acessar os elementos da struct Pessoa
    struct Pessoa *ptrPessoa;
    ptrPessoa = &pessoal;  // Corrigido: adicionado &

    // Imprimindo os dados da pessoal usando ponteiros
    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", ptrPessoa->nome);
    printf("Idade: %d anos\n", ptrPessoa->idade);
    printf("Altura: %.2f metros\n", ptrPessoa->altura);

    return 0;
}