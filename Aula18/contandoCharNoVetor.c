#include <stdio.h>
// #include <string.h>
int main()
{
    char nome[21];
    int i = 0, qnt = 0;

    printf("Informe seu nome: ");
    scanf(" %20[^\n]", nome);

    for (i = 0; nome[i] != '\0'; i++)
    {
        qnt++;
    }

    printf("Olá %s!, seu nome tem %d caracteres.", nome, qnt); // Em vez de contar no for, da para usar a função strlen(nome)
                                                               // Usando o #include <string.h>

    return 0;
}