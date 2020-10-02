#include <stdio.h>

int main(void)
{
    int numero; // basta igualar o numero por qualquer numero.
    printf("Qual numero: ");
    scanf("%i", &numero);

    if (numero < 0)
    {
        printf("Resposta Inválida\n");
    }
    else
    {
        if (numero % 2 == 0)
        {
            printf("O número é par\n");
        }
        else
        {
            printf("O número é impar\n");
        }
    }

    return 0;
}