#include <stdio.h>

/* leitura de string */
//gets

/* escrita de string */
//puts

int main()
{
    char nome[300]; //conjutno de 30 caracteres array
    gets(nome);    //funcao perigosa \n
    // fgests e coisa de arquivo
    puts(nome); // escreve e acrescente \n
    return 0;
    /* gets é uma fução perigosa pois depende de uma string LIMITADA
    caso a string ultrapasse o array o programa crashara */
}

