#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[30] = "Bruno Braganca";
    char nome2[30] = "Luis Felipe";
    char comparacao;

    //copia o que esta no nome1 para o nome2;
    strcpy(nome2, nome1);

    //compara o nome1 como nome2 ?
    comparacao = strcmp(nome1, nome2);

    printf("%i", comparacao); // negativo é diferente
                              // positivo é igual
    printf("\nNumero de caracteres lidos nome1 %li", strlen(nome1));
    printf("\nNumero de caracteres lidos nome2 %li\n", strlen(nome2));

    printf("%s\n", strcat(nome1, nome2));

    return 0;
}