#include <stdio.h>
// Escreva uma função que receba uma letra e 3 notas de um aluno.
// Se a letra for A, a função deve retornar a média aritmética das notas do aluno
// e se a letra for P, a função deve retornar a sua média ponderada com os pesos 5, 3 e 2 respectivamente.
float media(int num1, int num2, int num3, char op)
{
    if (op == 'a')
    {
        return (num1 + num2 + num3) / 3;
    }
    else if (op == 'p')
    {
        return (num1 * 5 + num2 * 3 + num3 * 2) / 10;
    }
}

int main()
{
    float nota1, nota2, nota3, resultado;
    char op;

    printf("Informe o cálculo desejado [A ou P]: ");
    scanf("%c", &op);

    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);

    resultado = media(nota1, nota2, nota3, op);

    printf("\nO resutlado é %.2f", resultado);
}