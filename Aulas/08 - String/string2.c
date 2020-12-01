#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[30] = "Carlos";
    char nome2[30] = "Luis";
    char x;

    x = memcmp(nome1, nome2, 6);
    
    printf("%i", x);
    
    return 0;
}