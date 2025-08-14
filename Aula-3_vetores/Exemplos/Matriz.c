#include <stdio.h>

int main()
{

    int matrizA[2][2] = {{1, 2}, {3, 4}};
    int matrizB[2][2] = {{5, 6}, {7, 8}};
    int matrizC[2][2];

    // Soma de matrizes
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Impressão da matriz resultante (matrizC)
    printf("Matriz C (resultado da soma): ");
    for (int i = 0; i < 2; i++)
    {
        printf("\n|");

        for (int j = 0; j < 2; j++)
        {
            printf(" %d |", matrizC[i][j]);
        }
    }
}