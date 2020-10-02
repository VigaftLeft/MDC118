#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%i, ", i);
    }
    printf("\n");





    int j = 0;
    while(j < 10)
    {
        printf("%i, ", j);
        j++;
    }
    printf("\n");






    int k = 0;
    do
    {
        printf("%i, ", k);
        k++;
    }
    while(k < 10);
    printf("\n");

    
    
    return 0;
}