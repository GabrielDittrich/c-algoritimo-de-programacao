#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Informe o número: ");
    scanf("%d", &num1);

    printf("Informe o número: ");
    scanf("%d", &num2);

    printf("Informe o número: ");
    scanf("%d", &num3);

    if (num1 < num2 && num1 < num3)
    {
        printf("\nO %d é o menor número", num1);
    }
    else if (num2 < num1 && num2 < num3)
    {
        printf("\nO %d é o menor número", num2);
    }
    else
    {
        printf("\nO %d é o menor número", num3);
    }

    return 0;
}
