#include <stdio.h>

int main()
{

    /* sintaxe */
    int i = 0;
    while (i < 10)
    {
        printf("%d, ", i);
        i++;
    }
    printf("\n");

    char ch = getchar();
    while (ch != '0')
    {
        printf("%c\n", ch);
        ch = getchar();
    }

    /* while aninhado */
    i = 0;
    while (i < 10)
    {
        int j = 0;
        while (j < 10)
        {
            printf("%d,%d ", i, j);
            j++;
        }
        i++;
    }
 
   /* while infinito */
    while(1) {
        printf("Ao infinito e alem!\n");
    }

    return 0;
}