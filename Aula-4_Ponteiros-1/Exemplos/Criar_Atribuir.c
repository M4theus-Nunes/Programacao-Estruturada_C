#include <stdio.h>

int main() {
    int x = 10;           // variável normal
    int *ponteiro;        // declaração de ponteiro para int

    ponteiro = &x;        // atribuindo o endereço de x ao ponteiro

    printf("Valor de x: %d\n", x);                  // acessando diretamente
    printf("Endereco de x: %p\n", &x);              // endereço de x
    printf("Valor do ponteiro: %p\n", ponteiro);    // ponteiro guarda o endereço de x
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro); // desreferenciando ponteiro

    *ponteiro = 20;       // alterando o valor de x usando o ponteiro
    printf("Novo valor de x: %d\n", x);

    return 0;
}
