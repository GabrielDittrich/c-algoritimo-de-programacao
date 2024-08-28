#include <stdio.h>

int main()
{
    int num;

    printf("Informe o número: ");
    scanf("%d", &num);

    if (num % 6 == 0)
    {
        printf("O número é divisivel por 2, e por 3.");
    }
    else if (num % 3 == 0)
    {
        printf("O número é divisivel por 3");
    }
    else if (num % 2 == 0)
    {
        printf("O número é divisivel por 2");
    }
    else
    {
        printf("O número não é divisivel por 2 e 3");
    }

    return 0;
}
