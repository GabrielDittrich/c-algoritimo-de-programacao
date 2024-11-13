#include <stdio.h>
// Escreva uma função que retorne o maior valor entre dois números inteiros
int maior(int num1, int num2)
{

    int maior = 0;

    if (num1 > num2)
    {
        maior = num1;
    }
    else if (num2 > num1)
    {
        maior = num2;
    }

    return maior;
}

int main()
{
    int num1, num2;

    printf("Insira o primeiro número: ");
    scanf("%d", &num1);

    printf("Insira o segundo número: ");
    scanf("%d", &num2);

    printf("\nO maior número é %d", maior(num1, num2));
}
