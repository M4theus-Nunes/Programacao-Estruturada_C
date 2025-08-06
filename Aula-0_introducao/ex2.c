// Crie um programa em C que peça ao usuário que insira um caractere e, em seguida, imprima o
// código ASCII correspondente ao caractere digitado. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char caractere = 'a';
    int ascii = 0;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    ascii = (int)caractere;

    printf("Caractere -> ASCII: %d", ascii);

    return 0;
}
