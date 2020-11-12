#include <stdio.h>

enum meses {jan, fev, mar, abri, maio, jun, jul, agost, set, out, nov, dez};

int main()
{
    int resposta;
    printf("Digite um numero de 1 a 12: ");
    scanf("%i", &resposta);
    switch (resposta - 1)
    {
    case jan:
        printf("Janeiro");
        break;
    case fev:
        printf("Fevereiro");
        break;
    case mar:
        printf("Marco");
        break;
    case abri:
        printf("Abril");
        break;
    case maio:
        printf("Maio");
        break;
    case jun:
        printf("Junho");
        break;
    case jul:
        printf("Julho");
        break;
    case agost:
        printf("Agosto");
        break;
    case set:
        printf("Setembro");
        break;
    case out:
        printf("Outubro");
        break;
    case nov:
        printf("Novembro");
        break;
    default:
        printf("O numero digitado nao pertence aos meses");
        break;
    }
    printf("\n");
    return 0;
}