#include <stdio.h>

enum dias {dom, seg, ter, qua, qui, sex, sab};
//comeca em zero
enum genero {male, female, indefindo, nao_binario, trans, motora4};

int main()
{
    int dia_da_semana;
    scanf("%i", &dia_da_semana);

    if (dia_da_semana == dom)
    {
        printf("dia nao util");
    }

    return 0;
}