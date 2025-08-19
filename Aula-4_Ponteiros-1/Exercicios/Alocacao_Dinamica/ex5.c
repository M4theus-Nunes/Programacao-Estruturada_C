// Escreva um programa em C que:
//  Pergunte ao usuário quantas notas deseja armazenar;
//  Aloque dinamicamente um vetor de float com essa quantidade;
//  Peça ao usuário para digitar todas as notas;
//  Use ponteiros para calcular e exibir a média das notas;
//  Libere a memória alocada ao final do programa.

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int qtd_notas;
    float soma = 0, media;

    printf("Quantas notas deseja armazenar: ");
    scanf("%d", &qtd_notas);

    float *vetor = calloc(qtd_notas, sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro ao alocar!\n");
    }

    for (int i = 0; i < qtd_notas; i++)
    {
        printf("Nota 1: ");
        scanf("%f", vetor + i); // é a mesma coisa que &vetor[i]
    }

    for (int i = 0; i < qtd_notas; i++)
    {
        soma += *(vetor + i); // é a mesma coisa que vetor[i]
    }

    media = soma / qtd_notas;

    printf("A media das notas e: %.2f", media);

    free(vetor);
    return 0;
}