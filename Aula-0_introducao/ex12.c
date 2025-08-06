// Crie um programa que declare duas variáveis globais. Uma função deve modificar o valor dessas
// variáveis. Outra função deve imprimir o valor dessas variáveis.

#include <stdio.h>

int g_valor1 = 0;
int g_valor2 = 10;

void imprimir_globais();
void alterar_valor();

int main()
{

    imprimir_globais();
    alterar_valor();
    imprimir_globais();

    return 0;
}

void imprimir_globais()
{
    printf("Valor 1: %d\n", g_valor1);
    printf("Valor 2: %d\n", g_valor2);
    return;
}

void alterar_valor()
{
    printf("\nNovo valor 1: ");
    scanf("%d", &g_valor1);
    printf("Novo valor 2: ");
    scanf("%d", &g_valor2);
    printf("\n");
    return;
}