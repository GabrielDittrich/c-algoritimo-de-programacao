#include <stdio.h>
// Escreva uma função que receba um símbolo e dois números.
//  O símbolo representa a operação que se deseja efetuar com os números
//  (soma, subtração, multiplicação ou divisão).
float calculo(float num1, float num2, char op)
{
    switch (op)
    {
    case '+':
        return num1 + num2;
        break;
    case '-':
        return num1 - num2;
        break;
    case '*':
        return num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            return num1 * num2;
        }
        else
        {
            printf("O indice na divisão não pode ser 0");
        }
        break;
    default:
        printf("Opção Invalida.");
        break;
    }
}

int main()
{
    float num1, num2;
    char op;

    printf("Insira o primeiro número: ");
    scanf("%f", &num1);

    printf("Insira o segundo número: ");
    scanf("%f", &num2);
    getchar();
    printf("Qual calculo você deseja ? \n[+] [-] [*] [/] \n");
    scanf("%c", &op);

    printf("O calculo dará: %.2f", calculo(num1, num2, op));

    return 0;
}