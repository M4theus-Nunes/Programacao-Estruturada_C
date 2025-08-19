// Solicite ao usuário as dimensões de uma matriz (linhas e colunas) e aloque dinamicamente essa
// matriz. Preencha com valores e exiba na forma matricial.

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{

    int linhas, colunas;

    printf("Coluna: ");
    scanf("%d", &colunas);
    printf("Linha: ");
    scanf("%d", &linhas);

    int **matriz = calloc(linhas, sizeof(int *));

    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = calloc(colunas, sizeof(int));
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = i + j;
        }
    }

    printf("\nMatriz:");

    for (int i = 0; i < linhas; i++)
    {
        printf("\n| ");
        for (int j = 0; j < colunas; j++)
        {
            printf("%d | ", matriz[i][j]);
        }
    }

    return 0;
}