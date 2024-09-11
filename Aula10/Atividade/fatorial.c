#include <stdio.h>
int main()
{
    // Escreva um algoritmo que calcule o fatorial de um número positivo qualquer.
    // Por exemplo, se número for 5, o resultado será 120 (5 * 4 * 3 * 2 * 1 = 120).

    int num1, num2, total = 1;
    printf("Insira o número do fatorial: ");
    scanf("%d", &num1);

    for (num2 = num1; num2 > 0; num2--)
    {
        printf("%d * ", num2);
        total *= num2;
    }
    printf("\nO fatorial de %d é %d", num1, total);

    return 0;
}