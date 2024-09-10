#include <stdio.h>

int main()
{
    int i;

    /*Escreva um algoritmo que mostre os números de 1 até 10, um número por linha.
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }*/

    //  Escreva um algoritmo que mostre os números múltiplos de 5, no intervalo de 1 até 100.
    while (i <= 100)
    {
        if (i % 5 == 0)
        {
            printf("%d  ", i);
        }
        i++;
    }
    return 0;
}