#include <stdio.h>

const float pi = 3.1416;

int main(void)
{
    float perimetro; // basta colocar qualuqer valor em perimetro
    float raio; //basta colocar qualquer valor em rario

    perimetro = 2 * pi * raio;

    printf("Perimetro da circunferencia: %f\n", perimetro);

    return 0;
}