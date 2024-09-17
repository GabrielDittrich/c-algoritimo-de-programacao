#include <stdio.h>

// Escreva um algoritmo que forneça quantos números devem existir em sequência a partir do 1 (1, 2, 3, 4,...)
// para que a sua soma ultrapasse o valor 100 o mínimo possível
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