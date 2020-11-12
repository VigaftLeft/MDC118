#include <stdio.h>

const int DOMINGO = 0;
const int SEGUNDA = 1;
const int TERCA = 2;
const int QUARTA = 3;
const int QUINTA = 4;
const int SEXTA = 5;
const int SABADO = 6;

int main()
{   
    int dia_da_semana;
    scanf("%i", &dia_da_semana);

    if (dia_da_semana == DOMINGO)
    {
        printf("dia nao util");
    }

    return 0;
}