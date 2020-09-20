#include <stdio.h>

int main(void)
{
    long double bytes_por_giga = 1.0; //basta colocar qualquer valor

    printf("Quantos bytes tem %.2LF gigas: %LF \n", bytes_por_giga, bytes_por_giga * 1024 * 1024 * 1024);

    return 0;
}