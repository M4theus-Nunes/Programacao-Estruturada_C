// Faça um programa que declare duas variáveis inteiras a e b, e inicialize com valores à sua
// escolha; use ponteiros para calcular a soma de a e b; e imprima o resultado da soma usando
// apenas os ponteiros (sem acessar diretamente a ou b).

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a = 5;
    int b = 7;

    int *pont_a = &a;
    int *pont_b = &b;

    int soma = *pont_a + *pont_b;

    printf("A soma dos dois numeros por ponteiros: %d", soma);

    return 0;
}