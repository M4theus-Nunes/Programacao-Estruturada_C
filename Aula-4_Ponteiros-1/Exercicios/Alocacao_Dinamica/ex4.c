// Crie um programa que aloque dinamicamente um vetor de n inteiros. Preencha-o com valores do
// usuário e, em seguida, crie outro vetor com o dobro do tamanho, copiando os elementos
// duplicados (cada valor aparece duas vezes consecutivas).7

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int qtd_indices = 5;

    int *vetor = malloc(qtd_indices * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for (int i = 0; i < qtd_indices; i++)
    {
        printf("Indice %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int *vetor2 = calloc(qtd_indices * 2, sizeof(int));

    int cont = 0;
    for (int i = 0; i < qtd_indices; i++)
    {
        vetor2[cont++] = vetor[i];
        vetor2[cont++] = vetor[i];
    }

    printf("\n  Vetor duplicado:\n");
    for (int i = 0; i < qtd_indices * 2; i++)
    {
        printf("Indice %d: %d\n", i, vetor2[i]);
    }

    free(vetor);
    free(vetor2);

    return 0;
}