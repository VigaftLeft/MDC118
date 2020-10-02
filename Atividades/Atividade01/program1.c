#include <stdio.h>

const float pi = 3.1416;

int main(void)
{
    float perimetro; // basta colocar qualuqer valor em perimetro.
    float raio;      //basta colocar qualquer valor em rario.

    printf("Qual é o raio: ");
    scanf("%f", &raio);

    if (raio < 0)
    {
        printf("Resposta Inválida\n");
    }
    else
    {
        perimetro = 2 * pi * raio;

        printf("Perimetro da circunferencia: %.2f\n", perimetro);
    }

    return 0;
}