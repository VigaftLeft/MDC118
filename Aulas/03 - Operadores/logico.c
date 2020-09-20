#include <stdio.h>

int main(void)
{
    int x = 30;
    int y = 20;
    int z;

    /* operador E */
    printf("%d\n", x > y);
    printf("%d\n", x - 10 > y);
    printf("%d\n", x > y && x - 10 > y);

    z = x > y && x - 10 > y;
    printf("%i\n", z);

    /*operador OU */
    printf("%d\n", x > y);
    printf("%d\n", x - 10 > y);
    printf("%d\n", x > y || x - 10 > y);

    z = x > y || x - 10 > y;
    printf("%i\n",z);

    /*operador NAO */
    printf("%d\n", !(x > y));
    printf("%d\n", !(x - 10 > y));
    printf("%d\n", !(x > y || x - 10 > y));

    z = !(x > y) || !(x - 10 > y);
    printf("%i\n", z);
    
    return 0;
}