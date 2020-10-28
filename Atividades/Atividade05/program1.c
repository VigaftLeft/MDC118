#include <stdio.h>

const int TAMANHO = 10;

int main()
{
    int valores[TAMANHO];
    int maior = 0;
    int menor = 9999999;

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Escolha um numero: ");
        scanf("%i", &valores[i]);
        if (valores[i] > maior)
        {
            maior = valores[i];
        }
        else if (valores[i] < menor)
        {
            menor = valores[i];
        }
    }
    printf("maior numero %i\n", maior);
    printf("menor numero %i\n", menor);

    return 0;
}