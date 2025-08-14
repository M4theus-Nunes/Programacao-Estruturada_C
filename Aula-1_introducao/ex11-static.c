// Crie uma função que declare uma variável estática. A função deve incrementar o valor da variável
// estática e imprimir o seu valor. Chame esta função várias vezes no seu programa principal e
// observe o comportamento da variável estática

#include <stdio.h>

void incrementar_static(void);

int main(void)
{
    incrementar_static(); // 1ª chamada
    incrementar_static(); // 2ª chamada
    incrementar_static(); // 3ª chamada
    return 0;
}

void incrementar_static(void)
{
    static int contador = 0; // variável estática → é criada somente uma vez na memoria, mantem o valor entre as chamadas da funcao.

    contador++;  // incrementa a cada chamada
    printf("Contador estatico: %d\n", contador);
}