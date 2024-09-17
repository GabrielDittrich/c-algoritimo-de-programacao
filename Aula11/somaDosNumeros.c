#include <stdio.h>

int main()
{
    int soma = 0, i = 1, contador = 0;

    do
    {
        soma = i + soma;
        i++;
        contador++;

    } while (soma <= 100);

    printf("\nNúmero de elementos: %d", contador);
    printf("\nSoma final: %d", soma);
}