#include <stdio.h>
// Escreva uma função que retorne o valor absoluto de um número
int absoluto(int num)
{

    if (num <= 0)
    {
        num = num * -1;
        return num;
    }
    else
    {
        return num;
    }
}

int main()
{
    int num = 5;

    printf("O valor absoluto é %d", absoluto(num));

    return 0;
}