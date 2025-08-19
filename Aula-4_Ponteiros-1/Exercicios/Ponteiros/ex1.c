// Crie um programa em C que declare uma variável inteira x com valor 10; declare um ponteiro
// para inteiro px; aponte px para x; e imprima o valor de x de duas formas: diretamente e usando
// o ponteiro

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x = 10;
    int *px = &x;

    printf("Valor de x usando x: %d", x);
    printf("\nValor de x usando ponteiro: %d", *px);

    return 0;
}