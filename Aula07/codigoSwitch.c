#include <stdio.h>

int main()
{
    float num1, num2;
    char operador;

    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);

    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    printf("\nQual operação você quer fazer?\n");
    scanf(" %c", &operador);

    switch (operador)
    {
    case '+':
        printf("A soma desses números da: %.2f", num1 + num2);
        break;
    case '-':
        printf("A subtração desses números da: %.2f", num1 - num2);
        break;
    case '*':
        printf("A multiplicação desses números da: %.2f", num1 * num2);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Dividir por 0 é invalido");
        }
        else
        {
            printf("A divisão desses números da: %.2f", num1 / num2);
        }
        break;
    }

    return 0;
}