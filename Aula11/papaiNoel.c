#include <stdio.h>

// Faça um algoritimo que o papai noel diga Ho, na quantidade de vezes que você pediu, e no final coloque uma exclamação
int main()
{
    int hohoho = 0;

    printf("Quantas vezes papai noel vai dizer Ho!?\n");
    scanf("%d", &hohoho);

    for (int i = 0; i < hohoho; i++)
    {
        printf("Ho\t");
    }
    printf("!");
}