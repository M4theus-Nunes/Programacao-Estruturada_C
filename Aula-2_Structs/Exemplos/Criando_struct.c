#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
};

void imprimirPessoa(struct Pessoa *pessoa) {
    printf("Nome: %s\nIdade: %d\n", pessoa->nome, pessoa->idade);
}

int main() {
    struct Pessoa pessoa1;

    strcpy(pessoa1.nome, "Maria Oliveira");
    pessoa1.idade = 30;

    imprimirPessoa(&pessoa1);

    return 0;
}
