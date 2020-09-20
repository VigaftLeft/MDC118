#include <stdio.h>

int main(void)
{
    int nota; //basta igualar a nota a um numero

    switch (nota)
    {
    case 1:
        printf("Ruim\n");
        break;
    case 2:
        printf("Insuficiente\n");
        break;
    case 3:
        printf("Suficiente\n");
        break;
    case 4:
        printf("Bom\n");
        break;
    case 5:
        printf("Ótimo\n");
        break;
    default:
        printf("os valores so podem ser de 1 a 5\n");
        break;
    }

    return 0;
}