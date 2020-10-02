#include <stdio.h>

int main()
{
    int numInt;
    printf("digite um numero inteiro positivo: ");
    scanf("%i", &numInt);
    int fact = numInt;

    int n = 1;
    if (numInt > 0)
    {
        while (n < numInt)
        {
            fact = fact * n;
            n++;
        }
        printf("fatorial de %i = %i", numInt, fact);
        printf("\n");
    }
    else if (numInt == 0)
    {
        printf("fatorial de %i = %i", numInt, n);
        printf("\n");
    }
    else
    {
        printf("valor invalido\n");
    }

    return 0;
}
