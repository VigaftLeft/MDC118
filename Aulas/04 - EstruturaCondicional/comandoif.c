#include <stdio.h>

int main(void)
{
    int condicao = 10;
    /* sintaxe basica */
    /* obs dos deuses gregos, qualquer valor maior que zero e considerado verdadeiro*/
    if (condicao)
    {
        printf("%s\n", "passei aqui");
        printf("%s\n", "passei aqui");
        //comando
    }
    if (!condicao)
    {
        printf("%s\n", "passei aqui");
        printf("%s\n", "passei aqui");
    }

    /* sintaxe completa */
    if (!condicao)
    {
        printf("%s\n", "de boas");
    }
    else
    {
        printf("%s\n", "deu ruim");
    }

    /* if else if*/
    float nota = 10.0;

    if (nota >= 5)
    {
        printf("%s\n", "aprovado miseravi");
    }
    else if (nota >= 1)
    {
        printf("%s\n", "RECUPERACAO");
    }
    else
    {
        printf("%s\n", "reprovado");
    }

    /* ifs alinhados = if dentro de if */
    float falta = 75;
    if (nota >= 5)
    {
        if (falta >= 75)
        {
            printf("%s\n", "aprovado"); 
        }
        else if (falta < 75);
        {
            printf("%s\n", "reprovado");
        }
    }
    else if (nota <= 1)
    {
        printf("%s\n", "recuperacao");
    }
    else
    {
        printf("%s\n", "reprovado");
    }
    return 0;
}
// se botasse tudo if, estes seriam soltos e nao fariam parte de uma logica maior. no caso if, else if, else faz parte de uma logica