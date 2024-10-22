#include <stdio.h>

int main()
{
    char nome[21];
    int idade;

    printf("Inform a idade: ");
    scanf("%d", &idade);

    printf("Informe seu nome: ");
    scanf(" %20[^\n]", nome); // O formato " %20[^\n]" permite ler até 20 caracteres, incluindo espaços,
                              // até que uma nova linha (\n) seja encontrada, ou apertar o enter.

    printf("Bom dia %s!, Você tem %d anos", nome, idade);

    return 0;
}