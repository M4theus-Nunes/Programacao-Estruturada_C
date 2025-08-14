#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    // Declaração da matriz de structs
    struct Pessoa matrizPessoas[3][2];

    // Inicialização da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            strcpy(matrizPessoas[i][j].nome, "Nome Padrão");
            matrizPessoas[i][j].idade = 0;
        }
    }

    // Impressão da matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Nome: %s\nIdade: %d\n\n", 
                   matrizPessoas[i][j].nome, 
                   matrizPessoas[i][j].idade);
        }
    }

    // Acesso a um elemento específico da matriz
    strcpy(matrizPessoas[1][0].nome, "João Silva");
    matrizPessoas[1][0].idade = 25;

    // Impressão da matriz
    printf("\nMatriz pós alteração de elemento:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Nome: %s\nIdade: %d\n\n", 
                   matrizPessoas[i][j].nome, 
                   matrizPessoas[i][j].idade);
        }
    }

    return 0;
}
