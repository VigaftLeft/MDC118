#include <stdio.h>

int main()
{
    int numInt;
    printf("digite um numero inteiro positivo: "); 
    scanf("%i", &numInt); //input do usuario
    int fact = numInt;

    int n = 1;
    if (numInt > 0) //numero deve ser maior = 0 para o codigo
    {
        while (n < numInt)
        {
            fact = fact * n;
            n++;
        }
        printf("fatorial de %i = %i", numInt, fact);
        printf("\n");
    }
    else if (numInt == 0) // caso o inpout for 0 
    {
        printf("fatorial de %i = %i", numInt, n);
        printf("\n");
    }
    else //caso o input for negativo
    {
        printf("valor invalido\n");
    }

    return 0;
}
