#include <stdio.h>

int main() {
    int vetor[5] = {10, 20, 30, 40, 50}; // vetor normal
    int *ponteiro;                        // ponteiro para int

    ponteiro = vetor; // ponteiro aponta para o início do vetor

    // Acessando elementos usando ponteiro
    printf("Usando aritmética de ponteiro:\n");
    for(int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(ponteiro + i));
    }

    // Acessando elementos usando notação de colchetes
    printf("\nUsando notação de colchetes com ponteiro:\n");
    for(int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, ponteiro[i]);
    }

    free(ponteiro);

    return 0;
}
