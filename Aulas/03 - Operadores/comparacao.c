#include <stdio.h>

int main(void)
{
    int x = 30;
    int y = 20;
    int z;

    /* maior que */
    z = x > y;
    printf("%d\n", z);

    /*menor que */
    z = x < y;
    printf("%d\n", z);

    /*igual*/
    z = x == y;
    printf("%d\n", z);
    //o igual (=), significa atribuir um valor a alguma coisa

    /* maior ou igual que */
    z = x >= y;
    printf("%d\n", z);

    /*menor ou igual que */
    z = x <= y;
    printf("%d\n", z);

    /* diferente de */
    z = x != y;
    printf("%d\n", z);

    return 0;
}