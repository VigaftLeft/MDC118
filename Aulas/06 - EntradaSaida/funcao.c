//funcao
//tipo_retorno nome_funcao(lista de argumentos)
//{

//}
#include <stdio.h>

const int PI = 3;

int calcular_area(int r); //mostrar que a funcao existe

int main()
{
    int raio; //scope local
    printf("Qual e o raio?\n");
    scanf("%i", &raio);

    int area = calcular_area(raio);

    printf("Sua area e de: %i\n", area);
    return 0;
}

int calcular_area(int r) //mostrando corpo da funcao
{
    return 2 * PI * r;
}