#include <stdio.h>
#include <string.h>

int main()
{
    char data[8];
    printf("digite a data dd/mm/aaaa\n");
    scanf("%s", data);
    
    printf("seu ano e mes na forma BR %c%c/%c%c/%c%c%c%c", data[0], data[1], data[2], data[3], data[4], data[5], data[6], data[7]);
    
    printf("seu ano e mes na forma US %c%c/%c%c/%c%c%c%c", data[2], data[3], data[1], data[0], data[4], data[5], data[6], data[7]);
    

    printf("\n");
    return 0;
}