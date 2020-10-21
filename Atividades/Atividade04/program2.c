#include <stdio.h>

int main()
{
    int ano;
    printf("Qual é o ano: ");
    scanf("%i", &ano);

    if (ano < 0)
    {
        printf("Numero negativo invalido\n");
    }
    else
    {
        if (ano == 0)
        {
            printf("Não é bissexto\n");
        }
        else if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
        {
            printf("seu ano é bissexto\n");
        }
        else
        {
            printf("seu ano nao é bissexto\n");
        }
    }

    return 0;
}