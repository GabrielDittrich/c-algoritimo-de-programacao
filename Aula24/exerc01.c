#include <stdio.h>
// Escreva um programa que leia dois números inteiros A e B do teclado
// e imprima as mensagens "Zero", "Número Positivo" ou "Número Negativo",
// conforme o resultado da multiplicação de A por B.
int multiplicacao(int num1, int num2)
{
    int result = 0;

    result = num1 * num2;

    if (result > 0)
    {
        return printf("Número positivo.");
    }
    else if (result == 0)
    {
        return printf("Zero");
    }
    else if (result < 0)
    {
        return printf("Número negativo");
    }
    else
    {
        return printf("Número invalido");
    }
}

int main()
{
    int num1, num2;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);

    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    printf("%c", multiplicacao(num1, num2));

    return 0;
}