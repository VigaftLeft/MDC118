#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[30] = "Carlos";
    char nome2[30];
    char x;

    memcpy(nome1, nome2, 6); //copia uma quantidade n de caracateres
    
    x = memcmp(nome1, nome2, 6); //quando a comparacao da 0 nome1 = nome2
                                 //qundo acomparacao da -1 nome1 != nome2   
    printf("%i", x);
    
    return 0;
}