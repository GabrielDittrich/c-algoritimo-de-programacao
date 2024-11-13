#include <stdio.h>
// Escreva uma função que receba dois números reais
// e retorne a soma dos números existentes entre eles.
float soma(float num1, float num2)
{

    return num1 + num2;
}

int main()
{
    float num1, num2;

    printf("Insira o primeiro número: ");
    scanf("%f", &num1);

    printf("Insira o primeiro número: ");
    scanf("%f", &num2);

    printf("%.2f", soma(num1, num2));

    return 0;
}
