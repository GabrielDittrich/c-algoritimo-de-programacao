#include <stdio.h>

int main()
{
    int num1;
    printf("Insira o número: ");
    scanf("%d", &num1);

    if (num1 > 0)
    {
        num1 = num1 % 2;
        if (num1 == 0)
        {
            printf("\nO número é par");
        }
        else
        {
            printf("\nO número é impar");
        }
    }
    else
    {
        printf("\nO valor absoluto do número é: %d", num1 * -1);
    }

    return 0;
}