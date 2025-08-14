#include <stdio.h>

typedef struct {
    int idade;
    char nome[20];
} Pessoa;

int main() {
    Pessoa p = {25, "Matheus"};
    Pessoa *ponteiro = &p; // ponteiro para a struct

    // Acessando membros usando -> 
    printf("Nome: %s\n", ponteiro->nome);
    printf("Idade: %d\n", ponteiro->idade);

    // Modificando valor usando ->
    ponteiro->idade = 30;
    printf("Nova idade: %d\n", ponteiro->idade);

    return 0;
}
