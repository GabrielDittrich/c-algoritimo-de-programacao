#include <stdio.h>

// Escreva um algoritmo que mostre todos os números pares existentes entre 1 e um número lido do teclado.
int main()
{
    int num1;

    printf("Digite um número: \n");
    scanf("%d", &num1);

    do
    {
        if (num1 % 2 == 0)
        {
            printf("%d\n", num1);
        }
        num1--;
    } while (num1 > 1);

    return 0;
}