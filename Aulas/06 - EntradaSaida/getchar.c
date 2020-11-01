#include <stdio.h>

int main()
{
    char ch; //variavel ch
    
    ch = getc(stdin);
    putc(ch, stdin);
    
    printf("\n------------\n"); //estetica
    getchar(); //elimina um enter 

    ch = getchar();
    putchar(ch);   
    
    printf("\n"); //estetica
    
    return 0;
}