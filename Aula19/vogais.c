#include <stdio.h>
#include <ctype.h>
// Escreva um programa para contar a quantidade de vogais em uma string.

int main() {
    char str[31];
    int quantidade = 0;

    printf("Informe a string: ");
    scanf(" %30[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            quantidade++;
        }
    }

    printf("Quantidade de vogais na string: %d\n", quantidade);
    return 0;
}
