#include <stdio.h>

int main()
{
    char x;
    printf("Digite um número, caracter ou caracter especial: ");
    scanf("%c", &x);
    printf("%i, esta é a representação de acordo com a tabela ASCII", x);

    if ((x > 96 && x < 123) || (x > 64 && x < 91))
    {
        printf(", logo %c é um caracter\n", (int)x);
    }
    else if (x > 47 && x < 58)
    {
        printf(", logo %c é um número\n", x);
    }
    else
    {
        printf(", logo %c é um caracter especial\n", x);
    }

    return 0;
}