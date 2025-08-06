// Crie um programa em C que peça ao usuário que insira um número inteiro e, em seguida, imprima
// a tabuada desse número de 1 a 10.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int numero = 0;

    printf("Tabuada do: ");
    scanf("%d", &numero);
    printf("\n");
    for (int i = 1; i <=10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}