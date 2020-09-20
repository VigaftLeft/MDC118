#include <stdio.h>

int main(void)
{
    char x = 'A'; // char = armazena letras unicas // 1 byte
    char y = 65;  // ASCII
    /* char vai do -128 a 127 */
    /* unsigned char vai do 0 a 255 */
    
    printf("%s", "testando com %c\n");
    printf("%c\n", x);
    printf("%c\n", y);

    printf("\n");

    printf("%s", "testando com %d\n");
    printf("%d\n", x);
    printf("%d\n", y);

    printf("--------\n");

    char min_0 = -128;
    char max_0 = 127;

    printf("%s", "testando com %c\n");
    printf("%c\n", min_0);
    printf("%c\n", max_0);

    printf("\n");

    printf("%s", "testando com %d\n");
    printf("%d\n", min_0);
    printf("%d\n", max_0);

    printf("-------\n");
    
    unsigned char min_1 = 0; // 1 byte
    unsigned char max_1 = 255;

    printf("%s", "testando com %c\n");
    printf("%c\n", min_1);
    printf("%c\n", max_1);

    printf("\n");

    printf("%s", "testando com %d\n");
    printf("%d\n", min_1);
    printf("%d\n", max_1);

    return 0;
}