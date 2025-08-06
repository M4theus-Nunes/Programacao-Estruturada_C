// Crie um programa em C que peça ao usuário que insira dois números inteiros e imprima a soma,
// a diferença, o produto e o quociente

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int soma(int a, int b);

int main()
{
    int numero1 = 0;
    int numero2 = 0;

    printf("Numero 1: ");
    scanf("%d", &numero1);
    printf("Numero 2: ");
    scanf("%d", &numero2);

    printf("\nSoma: %d", soma(numero1, numero2));

    return 0;
}

int soma(int a, int b)
{
    return a + b;
}