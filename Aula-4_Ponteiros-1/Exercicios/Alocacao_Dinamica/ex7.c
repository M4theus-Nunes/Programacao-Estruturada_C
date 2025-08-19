// Crie um programa que aloque dinamicamente um vetor de n inteiros. Após a leitura dos valores,
// pergunte ao usuário se deseja adicionar mais elementos. Se sim, use realloc para expandir o
// vetor, leia os novos elementos e imprima o vetor final.

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{

    int n = 3, n2 = 3;
    char opcao;

    int *vetor = calloc(n, sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro na alocacao!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Indice %d: ", i);
        scanf("%d", &vetor[i]);
    }

    do
    {
        printf("\nDeseja adicionar mais elementos: ");
        scanf(" %c", &opcao);

        if (opcao == 's')
        {
            printf("\n");
            n2 += 3;
            vetor = realloc(vetor, n2 * sizeof(int));

            for (int i = n; i < n2; i++)
            {
                printf("Indice %d: ", i);
                scanf("%d", &vetor[i]);
            }
            n = n2;
        }

    } while (opcao == 's');

    printf("\nVetor final:\n|");

    for (int i = 0; i < n2; i++)
    {
        printf(" %d |", vetor[i]);
    }
    return 0;
}