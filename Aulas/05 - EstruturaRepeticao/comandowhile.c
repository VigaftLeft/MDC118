#include <stdio.h>

int main(void)
{
    /* sixtaxe do while */
    /*while (condicao)
    {
        // repeticao indeterminada
    }*/
    /* while como o for */
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

    /* while infinito */
    while (1)
    {
        printf("ao infinito e alem\n");
    }
    
    return 0;
}