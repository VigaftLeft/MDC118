#include <stdio.h>

int main(void)
{
    /* sintaxe do do-while com o break */
    int i = 10;
    do
    {
        if (i == 10)
            break;
        printf("%d, ", i);
        i++;
    } while (i < 10);

    printf("\n");
    /* sitaxe do do-while com o continue */
    int j = 10;
    do
    {
        if (j < 20)
            continue;
        if (j == 10)
            break;
        printf("%d, ", j);
        j++;
    } while (j < 10);

   
    printf("\n");
    /* do-while infinito*/
    do
    {
        printf("ao infinito e alem");
    } while (1);
    // o break pode ser usado com outros comando, como o if, switch, dentre outros, com a MESMA funcao
    // continye e um comando que pula outras coisas
    return 0;
}