#include <stdio.h>

int main() {
    // Definindo uma matriz 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Declarando um ponteiro para percorrer a matriz
    int *ptr = NULL;

    // Inicializando o ponteiro para o primeiro elemento da matriz
    ptr = &matriz[0][0];

    // Percorrendo a matriz usando ponteiro
    printf("Elementos da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Imprimindo o valor apontado pelo ponteiro
            printf("%d ", *ptr);
            // Movendo o ponteiro para o próximo elemento da matriz
            ptr++;
        }
        printf("\n");
    }

    return 0;
}