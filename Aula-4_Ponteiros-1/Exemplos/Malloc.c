#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *vetor;

    // Aloca memória para 5 inteiros (não inicializada)
    vetor = (int *) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocação!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        vetor[i] = i * 10; // atribuindo valores
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor); // libera memória
    return 0;
}
