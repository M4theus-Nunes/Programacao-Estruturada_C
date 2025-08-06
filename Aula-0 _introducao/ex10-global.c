// Crie um programa que declare uma variável global e uma função. A função deve modificar o valor
// da variável global para o valor informado pelo usuário e o programa principal deve imprimir este
// valor.

#include <stdio.h>

// Variável global
int g_valor = 0;

// Protótipo da função
int alterar_global(void);

int main(void)
{
    printf("Valor global atual: %d\n", g_valor);
    g_valor = alterar_global(); // atualiza o valor global
    printf("Valor global alterado: %d\n", g_valor);

    return 0;
}

// Implementação da função
int alterar_global(void)
{
    int novo_valor = 0;

    printf("Novo valor: ");
    scanf("%d", &novo_valor);
    
    return novo_valor;
}
