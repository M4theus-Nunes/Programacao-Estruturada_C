#include <stdio.h>

int main() {
    int x = 10;          // variável normal
    int *ponteiro;       // ponteiro para int
    int **pp;            // ponteiro para ponteiro para int

    ponteiro = &x;       // ponteiro aponta para x
    pp = &ponteiro;      // pp aponta para ponteiro

    // Acessando valores
    printf("Valor de x: %d\n", x);
    printf("Valor usando ponteiro: %d\n", *ponteiro);
    printf("Valor usando ponteiro de ponteiro: %d\n", **pp);

    // Modificando valor usando ponteiro de ponteiro
    **pp = 20;
    printf("Novo valor de x: %d\n", x);

    return 0;
}


//1 int *ponteiro; → ponteiro normal para int.

//2 int **pp; → ponteiro que aponta para outro ponteiro (ponteiro).

//3 *ponteiro → valor de x.

//4 **pp → valor de x através do ponteiro de ponteiro.

//5 **pp = 20; → altera o valor de x usando o ponteiro de ponteiro.