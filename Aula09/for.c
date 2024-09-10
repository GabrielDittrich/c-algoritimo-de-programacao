#include <stdio.h>
// #include <unistd.h> No programiz inclua esse pacote para usar a função sleep()

int main()
{
    int i, soma;
    /*Escreva um algoritmo que mostre os números de 1 até 10, um número por linha
     for (int i = 1; i <= 5; i++)
     {
        printf("%d \n", i);
     }
     */

    /*Escreva um algoritmo que mostre os números múltiplos de 5, no intervalo de 1 até 100
        for (i = 5; i <= 100; i = i + 5)
        {
        printf("%d  ", i);
    }
    */

    /*Escreva um algoritmo que mostre na tela uma contagem regressiva de 10 até 0 para o lançamento de
    um foguete. Após o término da contagem regressiva, deve ser apresentada a palavra "Fogo!"
    for (i = 10; i >= 0; i--)
    {
        printf("%d\n", i);
        sleep(1);
    }
    printf("Fogo!!!");
    */

    // Escreva um algoritmo que mostre na tela a soma obtida dos 100 primeiros números inteiros (1 + 2 + 3 + 4 + 5 + ... + 100).
    soma = 0;

    for (i = 1; i <= 100; i++)
    {
        soma += i;
    }

    printf("A soma é: %d\n", soma);
    return 0;
}