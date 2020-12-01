#include <stdio.h>
#include <string.h>
int main()
{
    char nome[30] = "Bruno Braganca";
    char busca = 'o'; //variavel busca nao e necessario
    char *x;

    x = memchr(nome, 'o', strlen(nome));
    printf("a string depois de %c e %s\n", 'o', x); 

    return 0;
}