// Crie uma função chamada "parOuImpar" que recebe um número inteiro e imprime se ele é par
// ou ímpar. Use esta função em seu programa principal.

#include <stdio.h>
#include <stdbool.h>

int par_impar(int numero);

int main()
{

    int numero = 0;
    printf("Numero: ");
    scanf("%d", &numero);

    printf("%s", !par_impar(numero) ? "Par" : "Impar");

    return 0;
}

int par_impar(int numero)
{
    return numero % 2;
}