#include <stdio.h>

int main(void)
{
    long double giga_em_byt; //basta colocar qualquer valor
    printf("Valor de Gigabytes: ");
    scanf("%LF", &giga_em_byt);
    
    if (giga_em_byt < 0)
    {
        printf("Valor Inválido");
    }
    else
    {
        printf("%.0LF em bytes = %.3LF\n", giga_em_byt, giga_em_byt * 1024 * 1024 * 1024);

    }
    
    return 0;
}