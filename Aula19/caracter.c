#include <stdio.h>
//Escreva um programa que receba uma string e um caractere, e retorne o número de vezes que esse
//caractere aparece na string

int main() {
    char str[31];
    char carac;
    int qnt = 0;

    printf("Insira uma String: ");
    scanf(" %30[^\n]", str);

    printf("Qual caractere você quer ver? ");
    scanf(" %c", &carac);

    for (int i = 0; str[i] != '\0'; i++) {
        if (carac == str[i]) {
            qnt++;
        }
    }

    printf("O caractere '%c' aparece %d vezes\n", carac, qnt);
    return 0;
}
