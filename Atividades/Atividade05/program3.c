#include <stdio.h>
#include <string.h> //que fucao boa em :)

const int TAMANHO = 80;

int main()
{
    char array[TAMANHO];

    printf("digite ate 80 caracter: ");
    scanf("%s", array); //fgets(array, TAMANHO, stdin) stdin para ler o teclado

    for (int i = strlen(array); i > -1; i--) //menos um pois o array so conta a partir do 0 logo o fim é menos 1
    {
       printf("%c", array[i]);
    }
    printf("\n"); 

    return 0;
}