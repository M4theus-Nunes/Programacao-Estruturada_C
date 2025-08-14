// Crie uma função que recebe dois números inteiros e retorna a soma deles. Utilize essa função
// em seu programa principal.

#include <stdio.h>

int soma(int a, int b);

int main()
{

    int numero1 = 0;
    int numero2 = 0;

    printf("Numero 1: ");
    scanf("%d", &numero1);
    printf("Numero 2: ");
    scanf("%d", &numero2);

    printf("Soma: %d", soma(numero1, numero2));

    return 0;
}

int soma(int a, int b)
{
    return a + b;
}