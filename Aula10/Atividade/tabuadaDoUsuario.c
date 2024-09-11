#include <stdio.h>
int main()
{
    // Escreva um algoritmo que mostre a tabuada de um número inteiro qualquer que será digitado pelo
    // usuário, mas a tabuada não deve necessariamente iniciar em 1 e terminar em 10, ou seja, o valor inicial e final devem ser informados também pelo usuário.
    int num1, comeco, fim, resultado;

    printf("Número que vai ser usado na tabuada: ");
    scanf("%d", &num1);

    printf("Número que você quer que comece a tabuada: ");
    scanf("%d", &comeco);

    printf("Até onde deseja que a tabuada continue: ");
    scanf("%d", &fim);

    for (fim; comeco <= fim; comeco++)
    {
        resultado = comeco * num1;
        printf("%d * %d = %d\n", num1, comeco, resultado);
    }
    return 0;
}