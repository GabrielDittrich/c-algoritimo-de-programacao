#include <stdio.h>
// Escreva um programa que escreva na tela a seguinte saída,
//  escrevendo uma linha com 20 asteriscos através de um laço for
void linha()
{
    int i;
    for (i = 0; i <= 20; i++)
    {
        printf("*");
    }
}

int main()
{
    int i;

    linha();

    printf("\n");
    printf("Número de 1 a 5:");
    printf("\n");

    linha();
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", i + 1);
    }

    printf("\n");
    linha();

    return 0;
}