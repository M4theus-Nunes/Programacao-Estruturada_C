// Crie um programa em C que peça ao usuário que insira três números inteiros, calcule a média
// como um número de ponto flutuante e imprima o resultado

#include <stdio.h>

const int TAM = 3;
int main()
{
    int numeros[TAM];
    int soma = 0;

    for (int i = 0; i < TAM; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("\nMedia: %.2f", (float)soma / TAM);

    return 0;
}
