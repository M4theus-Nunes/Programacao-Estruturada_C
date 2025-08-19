#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *vetor;
 
    // Aloca memória para 5 inteiros e inicializa com 0
    vetor = (int *) calloc(n, sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocação!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]); // todos começam com 0
    }
    printf("\n");

    free(vetor);
    return 0;
}
