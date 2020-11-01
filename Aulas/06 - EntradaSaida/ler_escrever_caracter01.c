#include <stdio.h>
int main()
{
    char c;
    printf("Entre com um caractere: ");
    c = getc(stdin); // ou c = getchar();

    printf("Caractere lido: ");
    putc(c, stdout); // ou putchar(c)

    return (0);
}

