// Escreva um programa que declare uma variável y do tipo int com valor 5; use um ponteiro para
// alterar o valor de y para 20; e imprima o valor antes e depois da alteração via ponteiro

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int y = 5;
    int *ponteiro = &y;

    printf("Valor de y com o ponteiro inicio: %d", *ponteiro);
    *ponteiro = 20;
    printf("\nValor de y com o ponteiro fim: %d", *ponteiro);

    return 0;
}