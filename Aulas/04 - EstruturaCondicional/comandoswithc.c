#include <stdio.h>

int main(void)
{
    int nota = 11;
    /* sintaxe completa */
    switch (nota) // se e igual
    {
    case 10: // igualdade para comparar
        //printf("%s\n", "parabens");
        break;
    case 9:
        printf("%s\n", "parabens");
        break;
    case 4:
        printf("%s\n", "parabens");
        break;
    case 0:
        printf("%s\n", "parabens");
        break;
    default:
        printf("%s\n", "tu escreveu errado mane");
        break;
    }

    return 0;
}