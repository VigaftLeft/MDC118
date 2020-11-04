#include <stdio.h>

const int TAMANHO = 80;
int main()
{   
    int array[TAMANHO];

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("digite o numero: ");
        scanf("%i", &array[i]);
    }
    for (int i = TAMANHO -1; i > -1; i--) //menos um pois o array so conta a partir do 0 logo o fim é menos 1
    {
        if (i == 0)
        {
            printf("%i.", array[i]);
        }
        else
        {
            printf("%i, ", array[i]);
        }
    }
    printf("\n");

    return 0;
}