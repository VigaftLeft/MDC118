#include <stdio.h>

int main()
{
    printf("Numeros impares: ");

    for (int i = 1; i < 101; i++) //loop de 1 a 100
    {
        if (i == 99)
            printf("%i.", i);
        else if (i % 2 != 0)
            printf("%i, ", i);
    }
    printf("\n");

    return 0;
}