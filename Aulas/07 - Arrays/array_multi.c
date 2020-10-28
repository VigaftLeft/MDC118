#include <stdio.h>
#include <stdlib.h>

int main()
{

    float notas[4][2]; //4 seria as linhas, 2 as colunas
    float medias[4];

    // proporcao
    //0 - x - RAND_MAX
    //0 - y - 10
    // x-0 / y-0 = RAND_MAX - x / 10 - y => x/y = RADM_MAX - x/ 10 - y
    // 10x - xy = RAND_MAXy - xy => 10x = RAND_MAXy => y = 10*x / RAND)AMX

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            notas[i][j] = rand()*10.0/RAND_MAX;
            //printf("notas%d,%d = ", i, j);
            //scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        float soma = 0;
        for (int j = 0; j < 2; j++)
        {
            soma = soma + notas[i][j];
            printf("%5.1f ", notas[i][j]);
        }
        medias[i] = soma / 2;
        printf("%5.1f \n", medias[i]);
    }

    printf("\n");

    return 0;
}