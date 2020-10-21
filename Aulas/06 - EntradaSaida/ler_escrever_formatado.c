#include <stdio.h>

/* leitura formatada */
//scanf

/* escrita foramtada */
//printf

int main()
{
    char ch;
    int numero;
    float valor;
    char nome[30];

    scanf("%c", &ch); //referencia da variavel 
    scanf("%i", &numero);
    scanf("%f", &valor);
    scanf("%s", nome); // nao precis de referencia pois e um conjunto
    //ou 
    //scanf("%c %d %f %s", &ch, &numero, &valor, nome);

    printf("%c, %i, %f, %s", ch, numero, valor, nome);
    return 0;
}