#include <stdio.h>

const int TAMANHO = 10;

int main()
{
    int numeros[TAMANHO] = {10, 5, 6, 98, -9, 0, 75, 4, 3, 1}; //pode ter o TAMANHO ou nao 
                                                                //sem o TAMANHO a array fica variavel

    numeros[0] = 100;
    numeros[7] = -20;
    numeros[1] = numeros[0] + numeros[7];
    scanf("%i", &numeros[2]); //se tivesse so &numeros estaria lendo a posicao 0

    printf("%i %i %i %i\n", numeros[0], numeros[7], numeros[1], numeros[2]);

    for (int i = 0; i < TAMANHO; i++)
    {
        numeros[i] = i + 1;
    }
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%i, ", numeros[i]);
    }
    printf("\n");
    return 0;
}