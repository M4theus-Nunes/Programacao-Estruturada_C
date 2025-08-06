// Crie uma função que declare uma variável estática e outra função que declare uma variável
// automática (não-estática). Ambas as funções devem incrementar o valor das respectivas
// variáveis e imprimir o seu valor. Chame estas funções várias vezes no seu programa principal e
// observe o comportamento das variáveis estática e automática.

#include <stdio.h>

void variavel_estatica();
void variavel_automatica();

int main()
{

    for (int i = 0; i < 3; i++)
    {
        variavel_estatica();
    }
    for (int i = 0; i < 3; i++)
    {
        variavel_automatica();
    }

    return 0;
}

void variavel_estatica()
{
    static int valor = 0;
    valor++;
    printf("Estatico: %d\n", valor);
    return;
}

void variavel_automatica()
{
    int valor = 0;
    valor++;
    printf("Automatica: %d\n", valor);
    return;
}