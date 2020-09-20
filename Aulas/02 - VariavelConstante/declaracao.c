#include <stdio.h>

/* tipo nome_variavel = valor inicial */

char ch = 'A';  // ou ch = 50; -128 a 127
char cs = 34; 
unsigned char var = -19; //converte para um numero sem sinal 237 ==> 0 a 127 a -1 (255 - 19 + 1) = 237
short int curto = 23546; // -32635 a 32634
int numero = 100;
int longo = 10L;
float decimal = 0.593123;
double duplo = 0.7489327489237489;

const int SEXO_MASCULINO = 1;

int main(void)
{
    printf("%c\n", ch);
    printf("%c\n", cs);
    printf("%d\n", var);
    printf("%d\n", curto);
    printf("%d\n", numero);
    printf("%d\n", longo);
    printf("%f\n", decimal);
    printf("%.7lf\n", duplo);
    printf("%d\n", SEXO_MASCULINO);
    
    return 0;
}