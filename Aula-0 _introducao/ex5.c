// Crie um programa em C que peça ao usuário que insira a base e a altura de um triângulo
// (números de ponto flutuante), e depois calcule e imprima a área desse triângulo. 

#include <stdio.h>

float calcular_area(float a, float b);

int main () {

    float base =0.0;
    float altura =0.0;

printf("Base: ");
scanf("%f", &base);

printf("Altura: ");
scanf("%f", &altura);

printf("\nArea: %.2f", calcular_area(base, altura));

return 0;
}

float calcular_area(float a, float b){
    return (a * b)/2;
}