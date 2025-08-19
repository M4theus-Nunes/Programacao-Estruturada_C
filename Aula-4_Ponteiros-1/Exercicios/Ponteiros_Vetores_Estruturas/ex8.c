// Dado um vetor de inteiros com 5 elementos, percorra-o usando apenas ponteiros e imprima seus
// valores.

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{

    int vetor[5] = {1, 2, 3, 4, 5};
    int *ponteiro = vetor;

    for (int i = 0; i < 5; i++)
    {
        printf("Indice %d: %d\n", i, *(ponteiro + i)); // mesmo que vetor[i]
    }

    return 0;
}