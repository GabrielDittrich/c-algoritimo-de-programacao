#include <stdio.h>
int main()
{
    // Escreva um algoritmo que calcule e mostre na tela uma tabela de valores de temperatura em Celsius e Farenheit.
    // A faixa de temperaturas que deve ser mostrada é de 0 a 100 graus Celsius, em intervalos de 5 graus

    float c = 0, f;
    printf("    ****** Tabela Celsius/Fahrenheit *****\n");
    for (c; c < 100; c = c + 5)
    {
        f = (c * 9 / 5) + 32;
        printf("Celsius: %.1f | Fahrenheit: %.1f \n", c, f);
    }
    return 0;
}