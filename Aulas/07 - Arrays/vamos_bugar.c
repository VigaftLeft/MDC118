#include <stdio.h>

int main()
{
    int bug[10];

    for (int i = 0; i < 11; i++)
    {
        bug[i] = i + 1;
    }
    for (int i = 0; i < 11; i++)
    {
        printf("%i", bug[i]);
    }

    return 0;
}