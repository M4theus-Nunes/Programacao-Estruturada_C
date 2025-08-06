// Crie um programa em C que declare variáveis de cada um dos tipos básicos atribua valores as
// variáveis criadas e, em seguida, imprima seus valores.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int inteiro = 0;
    float decimal = 12.34;
    double decimal_extenso = 12.3123123;
    char caractere = 'a';
    char frase[100] = "Hello World!";
    bool booleano = true;

    printf("Digite um valor para Inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um valor para Float: ");
    scanf("%f", &decimal);

    printf("Digite um valor para Double: ");
    scanf("%lf", &decimal_extenso);
    getchar(); // consome o Enter

    printf("Digite um valor para Char: ");
    scanf(" %c", &caractere);
    getchar(); // consome o Enter

    printf("Digite um valor para String: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    printf("\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Decimal: %.2f\n", decimal);
    printf("DecimalExtenso: %.6lf\n", decimal_extenso);
    printf("Caractere: %c\n", caractere);
    printf("Frase: %s\n", frase);
    printf("Boolean: %s\n", booleano ? "true" : "false");

    return 0;
}