#include <stdio.h>

int main() {
    int vetor[5] = {10, 20, 30, 40, 50};
    int *ponteiro = vetor; // ponteiro aponta para o início do vetor

    printf("Acessando elementos usando ponteiro e *:\n");
    for(int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(ponteiro + i)); // desreferenciando
    }

    printf("\nEnderecos dos elementos usando & e ponteiro:\n");
    for(int i = 0; i < 5; i++) {
        printf("Endereco de vetor[%d]: %p\n", i, (ponteiro + i));
    }

    printf("\nAlterando valor do vetor usando ponteiro:\n");
    *(ponteiro + 2) = 100; // muda vetor[2] de 30 para 100
    printf("Novo valor de vetor[2]: %d\n", vetor[2]);

    return 0;
}

// & (operador de endereço): obtém o endereço de uma variável.

// * (operador de desreferenciamento): acessa o valor armazenado no endereço apontado por um ponteiro.

// -> (operador de membro): acessa membros de uma estrutura através de um ponteiro.