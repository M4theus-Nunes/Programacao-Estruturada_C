// As strings em C são vetores de caracteres. Isso significa que elas são compostas por uma sequência de caracteres alfanuméricos, símbolos e espaços em branco, armazenados em sequência na memória. Apesar de não existir um tipo de dado específico para strings em C, elas são frequentemente utilizadas para representar textos e dados alfanuméricos.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void declarar_variavel();
void formatar_maiusculo();
void comparar_string();
void concatenar_string();
void copiar_string();
void buscar_caractere();
void converter_string();
void copiar_string();

int main()
{
    declarar_variavel();

    formatar_maiusculo();
    printf("\n\n\n");

    comparar_string();
    printf("\n\n\n");

    concatenar_string();
    printf("\n\n\n");

    copiar_string();
    printf("\n\n\n");

    buscar_caractere();
    printf("\n\n\n");

    converter_string();
    printf("\n\n\n");

    return 0;
}

void declarar_variavel()
{
    char nome[50]; // Declara um vetor de 50 caracteres para armazenas um nome

    char *mensagem = "Ola, mundo!"; // Declara um ponteiro para uma string literal

    return;
}

void formatar_maiusculo()
{
    char str[100]; // Declaração de um array de caracteres com tamanho máximo de 100.

    // Leitura da atring do usuario
    printf("Digite uma string: ");
    scanf("%s", str);

    // Varredura da string caractere por caractere
    for (int i = 0; str[i] != '\0'; i++)
    {
        // Manipulação de cada caractere
        // Exemplo: converter para maiúsculo
        str[i] = toupper(str[i]);
    }

    // Impressão da nova string
    printf("Nova string: %s\n", str);
}

void comparar_string()
{
    int resultado = strcmp("abc", "ABC");
    printf("%d\n", resultado);

    if (resultado == 0)
    {
        printf("As strings são iguais.\n");
    }
    else if (resultado < 0)
    {
        printf("A string 'abc' e menor que 'ABC'.\n");
    }
    else
    {
        printf("A string 'abc' e maior que 'ABC'.\n");
    }
}

void concatenar_string()
{
    // Primeira concatenação com strcat
    char destino1[50] = "Ola, "; // string base
    char origem1[] = "mundo!";   // string a ser anexada

    strcat(destino1, origem1);                  // concatena origem1 ao final de destino1
    printf("Resultado strcat: %s\n", destino1); // saída esperada: "Olá, mundo!"

    // Segunda concatenação com strncat
    char destino2[50] = "Ola, ";     // novo buffer para evitar usar o anterior
    char origem2[] = "mundo cruel!"; // nova origem

    strncat(destino2, origem2, 3);               // anexa apenas os 3 primeiros caracteres de origem2
    printf("Resultado strncat: %s\n", destino2); // saída esperada: "Olá, mun"

    return;
}

void copiar_string()
{
    // Origem da string
    char origem[] = "Ola, mundo!";

    // Destinos
    char destino1[50]; // Para strcpy
    char destino2[50]; // Para strncpy

    // --- strcpy: copia a string inteira ---
    strcpy(destino1, origem);                  // Copia tudo, incluindo o '\0'
    printf("Usando strcpy:   %s\n", destino1); // Saída: "Olá, mundo!"

    // --- strncpy: copia apenas parte da string ---
    strncpy(destino2, origem, 5); // Copia apenas os 5 primeiros caracteres
    destino2[5] = '\0';           // Adiciona o terminador manualmente

    printf("Usando strncpy:  %s\n", destino2); // Saída: "Olá, "
}

void buscar_caractere()
{
    char frase[] = "A linguagem C a clara e concisa.";

    // Procurar a primeira ocorrência da letra 'c'
    char *primeiroC = strchr(frase, 'c');

    if (primeiroC != NULL)
    {
        int indice1 = primeiroC - frase;
        printf("Primeiro 'c' encontrado na posicao: %d\n", indice1);
    }
    else
    {
        printf("Letra 'c' nao encontrada.\n");
    }

    // Procurar a última ocorrência da letra 'c'
    char *ultimoC = strrchr(frase, 'c');

    if (ultimoC != NULL)
    {
        int indice2 = ultimoC - frase;
        printf("Ultimo 'c' encontrado na posicao: %d\n", indice2);
    }
    else
    {
        printf("Letra 'c' nao encontrada.\n");
    }

    return;
}

void converter_string()
{
    char str_inteiro[] = "12345";
    char str_decimal[] = "3.14159";

    // atoi: converte string para inteiro
    int numero_inteiro = atoi(str_inteiro);

    // atof: converte string para double
    double numero_decimal = atof(str_decimal);

    // Exibe os valores convertidos
    printf("String original (inteiro): %s -> int: %d\n", str_inteiro, numero_inteiro);
    printf("String original (decimal): %s -> double: %.5f\n", str_decimal, numero_decimal);

    return;
}


//1 strchr(), localiza a primeira ocorrência de um caractere dentro de uma string

//2 strrchr(), localiza a última ocorrência de um caractere dentro de uma string

//3 atoi(), converte uma string que representa um número para um valor do tipo real

//4 atof(), converte uma string que representa um número de ponto flutuante para um valor do tipo double

//5 sprintf(), permite formatar strings para exibição na tela, utilizando especificadores de formato como %s, %d, %f