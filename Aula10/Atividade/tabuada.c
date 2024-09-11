#include <stdio.h>
int main()
{
    // Escreva um algoritmo que apresente na tela a tabuada de um número lido do teclado.
    float num1, resultado;

    printf("Insira o número da tabuada: ");
    scanf("%f", &num1);

    for (int i = 1; i <= 10; i++)
    {
        resultado = num1 * i;
        printf("%.2f * %d = %.2f \n", num1, i, resultado);
    }

    return 0;
}