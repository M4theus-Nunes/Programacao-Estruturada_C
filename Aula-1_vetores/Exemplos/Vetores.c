// Vetores são estruturas de dados homogêneas que armazenam uma coleção ordenada de elementos do mesmo tipo de dado.

#include <stdio.h>

void numeros_pares();
void substituir_valor_indice();
void vetor_inverso();

int main()
{
    numeros_pares();
    printf("\n\n\n");

    substituir_valor_indice();
    printf("\n\n\n");

    vetor_inverso();

    return 0;
}

void numeros_pares()
{
    int numeros[101]; // vetor com 101 posições (de 0 a 100)

    // Preenchendo o vetor com números de 0 a 100
    for (int i = 0; i < 101; i++)
    {
        numeros[i] = i;
    }

    // Desvendando os números pares
    printf("Numeros pares: \n|");
    for (int j = 0; j < 101; j++)
    {
        if (numeros[j] % 2 == 0)
        {
            // Revelando os segredos dos pares
            printf(" %d |", numeros[j]);
        }
    }
    return;
}

void substituir_valor_indice()
{
    int numeros[10]; // Vetor com 10 posições
    int indice = 0;
    int novo_valor = 0;

    printf("Vetor original: \n|");

    // Preenchendo o vetor com números

    for (int i = 0; i < 10; i++)
    {
        numeros[i] = i + 1;
        printf(" %d |", numeros[i]);
    }

    // Recebendo as coordenadas secretas
    printf("\nDigite o indice do elemento: ");
    scanf("%d", &indice);

    // Recebendo o novo valor a ser desvendado
    printf("\nDigite o novo valor: ");
    scanf("%d", &novo_valor);

    // Substituindo o valor no índice indicado
    numeros[indice] = novo_valor;

    // Confirmando a missão concluída
    printf("\nO valor do elemento no indice %d foi substituido por %d", indice, novo_valor);

    printf("\nVetor pos modificacao: \n|");
    // Preenchendo o vetor com números
    for (int i = 0; i < 10; i++)
    {
        printf(" %d |", numeros[i]);
    }
}

void vetor_inverso()
{
    int numeros[10], i, j, aux;

    printf("Vetor original: \n|");
    // Preenchendo o vetor com números
    for (i = 0; i < 10; i++)
    {
        numeros[i] = i + 1;

        printf(" %d |", numeros[i]);
    }

    // Invertendo a ordem do vetor
    for (i = 0, j = 9; i < j; i++, j--)
    {
        aux = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = aux;
    }

    printf("\nVetor inverso: \n|");
    // Revelando a ordem restaurada
    for (i = 0; i < 10; i++)
    {
        printf(" %d |", numeros[i]);
    }
    return;
}