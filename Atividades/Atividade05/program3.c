
#include <stdio.h>

int main()
{   
    int TAMANHO = 80;
    int array[TAMANHO];
    printf("digite o numero: ");

    for (int i = 0; i < TAMANHO; i++)
    {
        scanf("%i", &array[i]);
        if (array[i] == 's')
        {
            i = TAMANHO;
            for (int j = i -1; j > -1; j--)
            {
                printf("%i", array[j]);
            }
        }
        printf("%i", i);
    }

    
    printf("\n");

    return 0;
}