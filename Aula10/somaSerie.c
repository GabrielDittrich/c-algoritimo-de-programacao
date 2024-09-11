#include <stdio.h>

int main()
{
    // Escreva um algoritmo que mostre o resultado da série: 1/100 + 2/99 + 3/98 + 4/97 + ... + 100/1
    int i;
    float numerador = 1, denominador = 100, soma = 0;
    for (i = 1; i <= 100; i++)
    {
        soma += numerador / denominador;
        numerador++;
        denominador--;
    }

    printf("A soma é: %.2f", soma);

    return 0;
}