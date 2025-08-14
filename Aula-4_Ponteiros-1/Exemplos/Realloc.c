#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *vetor;

    vetor = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        vetor[i] = i * 10;
    }

    // Aumentando o vetor para 8 elementos
    n = 8;
    vetor = (int *) realloc(vetor, n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de realocação!\n");
        return 1;
    }

    // Preenchendo os novos elementos
    for (int i = 5; i < n; i++) {
        vetor[i] = i * 10;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}
