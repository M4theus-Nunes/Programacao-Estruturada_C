// Uma empresa deseja criar um sistema para cadastrar funcionários. Cada funcionário tem um nome, um cargo e um salário. O nome pode
// ter no máximo 50 caracteres e o cargo pode ter até 30 caracteres. Após cadastrar 5 funcionários, o sistema deve verificar se há algum
// funcionário com o mesmo cargo e, se houver, exibir os detalhes desses funcionários.
#include <stdio.h>
#include <string.h>

#define QTD_FUNC 5

int main() {
    char nome[QTD_FUNC][50];
    char cargo[QTD_FUNC][30];
    float salario[QTD_FUNC];

    printf("Cadastro dos funcionarios:\n\n");

    for (int i = 0; i < QTD_FUNC; i++) {
        printf("Funcionario %d:\n", i + 1);

        printf("Nome: ");
        fgets(nome[i], sizeof(nome[i]), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0'; // Remove o \n

        printf("Cargo: ");
        fgets(cargo[i], sizeof(cargo[i]), stdin);
        cargo[i][strcspn(cargo[i], "\n")] = '\0';

        printf("Salario: ");
        while (scanf("%f", &salario[i]) != 1) {
            while (getchar() != '\n'); // limpa buffer
            printf("Entrada invalida. Digite um valor numerico para o salario: ");
        }
        while (getchar() != '\n'); // limpa o \n

        printf("\n");
    }

    printf("\n\nFuncionarios com cargos iguais:\n\n");

    int encontrou = 0;

    for (int i = 0; i < QTD_FUNC; i++) {
        for (int j = i + 1; j < QTD_FUNC; j++) {
            if (strcmp(cargo[i], cargo[j]) == 0) {
                encontrou = 1;
                printf("Funcionario %d:\n", i + 1);
                printf("Nome: %s\n", nome[i]);
                printf("Cargo: %s\n", cargo[i]);
                printf("Salario: %.2f\n\n", salario[i]);

                printf("Funcionario %d:\n", j + 1);
                printf("Nome: %s\n", nome[j]);
                printf("Cargo: %s\n", cargo[j]);
                printf("Salario: %.2f\n\n", salario[j]);
            }
        }
    }

    if (!encontrou) {
        printf("Nenhum funcionario com cargo igual foi encontrado.\n");
    }

    return 0;
}
