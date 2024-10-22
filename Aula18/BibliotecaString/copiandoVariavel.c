#include <stdio.h>
#include <string.h>
int main()
{
    char str1[21], str2[20];

    printf("Informe a string: ");
    scanf(" %20[^\n]", str1);

    strcpy(str2, str1);

    printf("Resultado copiado na outra variavel: %s", str2);
    return 0;
}