#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[50] = "Programar";
    char str2[50] = " em C";
    char str3[50];

    // 1. strlen - tamanho da string (sem contar o '\0')
    printf("Tamanho de str1: %lu\n", strlen(str1));

    // 2. strcpy - copia string
    strcpy(str3, str1);
    printf("str3 (copia de str1): %s\n", str3);

    // 3. strncpy - copia até N caracteres
    strncpy(str3, str1, 4);
    str3[4] = '\0'; // garantir término da string
    printf("Primeiros 4 caracteres de str1: %s\n", str3);

    // 4. strcat - concatena strings
    strcat(str1, str2);
    printf("Concatenação: %s\n", str1);

    // 5. strncat - concatena até N caracteres
    char texto[50] = "Bom";
    strncat(texto, " diaaa", 4); // adiciona apenas " dia"
    printf("Concatenação parcial: %s\n", texto);

    // 6. strcmp - compara strings (0 se iguais)
    if (strcmp("abc", "abc") == 0)
    {
        printf("As strings são iguais!\n");
    }
    else if (strcmp("abc", "abc") > 0)
    {
        printf("string 1 maior que 2");
    }else{
        printf("string 1 menor que 2");
    }

    // 7. strncmp - compara até N caracteres
    if (strncmp("abcdef", "abcxyz", 3) == 0)
    {
        printf("As 3 primeiras letras são iguais!\n");
    }

    // 8. strchr - busca 1ª ocorrência de um caractere
    char *ptr = strchr("banana", 'n');
    if (ptr)
    {
        printf("Primeiro 'n' encontrado em: %s\n", ptr);
    }

    // 9. strrchr - busca última ocorrência
    ptr = strrchr("banana", 'n');
    if (ptr)
    {
        printf("Último 'n' encontrado em: %s\n", ptr);
    }

    // 10. strstr - busca substring
    ptr = strstr("Aprender C é legal", "C");
    if (ptr)
    {
        printf("Substring encontrada: %s\n", ptr);
    }

    // 11. strtok - separa string em tokens
    char frase[] = "C,Java,Python";
    char *token = strtok(frase, ",");
    printf("Tokens:\n");
    while (token != NULL)
    {
        printf(" - %s\n", token);
        token = strtok(NULL, ",");
    }

    // 12. toupper / tolower - alterar maiúsculas/minúsculas
    char nome[] = "Matheus";
    for (int i = 0; nome[i] != '\0'; i++)
    {
        nome[i] = toupper(nome[i]);
    }
    printf("Maiúsculas: %s\n", nome);

    for (int i = 0; nome[i] != '\0'; i++)
    {
        nome[i] = tolower(nome[i]);
    }
    printf("Minúsculas: %s\n", nome);

    return 0;
}
