#include <stdio.h>

int main()
{
    printf("1\n"); //primeiro termo da sequencia de fibonacci
    int resposta;
    int resposta_nova;
    int a = 0;
    int b = 1;
    for(int i = 0; i < 9; i++) //loop de nove vezes 
    {
        resposta = a + b;
        printf("%i\n", resposta);
        a = b;
        b = resposta;
        resposta = 0;
    }
    

    return 0;
}