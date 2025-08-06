// Crie um programa em C que declare uma variável int e uma variável char. Atribua a eles valores
// fornecidos pelo usuário. Em seguida, incremente cada um várias vezes (o número de vezes
// também é fornecido pelo usuário) e imprima os resultados.

#include <stdio.h>

int main()
{
    int numero = 0;
    int qtd_incremento = 0;
    char letra = ' ';

    printf("Numero: ");
    scanf("%d", &numero);

    printf("Letra: ");
    scanf(" %c", &letra);

    printf("QTD Incrementos: ");
    scanf("%d", &qtd_incremento);

    for (int i = 0; i < qtd_incremento; i++)
    {
        numero++;
        letra++;
    }

    printf("\nNumero: %d", numero);
    printf("\nLetra: %c", letra);

    return 0;
}