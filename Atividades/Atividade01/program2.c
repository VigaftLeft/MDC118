#include <stdio.h>

int main(void)
{
    float x;
    printf("Qual é o valor de x de segundos: ");
    scanf("%f", &x);

    if (x < 0)
    {
        printf("Resposta inválida\n");
    }
    else
    {
        printf("%.0f segundos em horas: %.3f \n", x, x / 3600);
        printf("%.0f em minutos: %.3f\n", x, x / 60);
        printf("%.0f em segundos: %.0f\n", x, x);
    }

    return 0;
}