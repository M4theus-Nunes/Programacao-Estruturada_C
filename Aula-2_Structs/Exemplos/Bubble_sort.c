#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
};

void bubbleSort(struct Pessoa *pessoas, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (pessoas[j].idade > pessoas[j + 1].idade) {
                struct Pessoa aux = pessoas[j];
                pessoas[j] = pessoas[j + 1];
                pessoas[j + 1] = aux;
            }
        }
    }
}

int main() {
    // Declaração do vetor de structs
    struct Pessoa pessoas[3];

    // Leitura dos dados do usuário conforme exemplos anteriores
    // ...

    // Ordenação do vetor por idade
    bubbleSort(pessoas, 3);

    // Impressão dos dados ordenados
    for (int i = 0; i < 3; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n\n", pessoas[i].idade);
    }

    return 0;
}
