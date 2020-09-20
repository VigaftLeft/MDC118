#include <stdio.h>

int main(void)
{
    int min_0 = -2147483648; // 4 bytes
    int max_0 =  2147483647;

    printf("%s\n", "%d");

    printf("%d\n", min_0);
    printf("%d\n", max_0);
    
    printf("%s\n", "%i");

    printf("%i\n", min_0);
    printf("%i\n", max_0);

    printf("--------\n");

    unsigned int min_1 = 0; // 4 bytes
    unsigned int max_1 = 4294967295;

    printf("%d\n", min_1);
    printf("%d\n", max_1);

    printf("--------\n");
    
    short int min_2 = -32768; // 2 bytes
    short int max_2 = 32767;

    printf("%d\n", min_2);
    printf("%d\n", max_2);

    printf("--------\n");

    unsigned short int min_3 = 0; // 2 bytes
    unsigned short int max_3 = 65535;

    printf("%d\n", min_3);
    printf("%d\n", max_3);

    return 0;
}