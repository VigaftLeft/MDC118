#include <stdio.h>

int main()
{
    int resposta;
    int dados[7][2] = {{1111, 30001000}, {2222, 30002000}, {3333, 30003000}, {4444, 30004000}, {5555, 30005000}, {6666, 30006000}, {7777, 30007000}};

    printf("Qual a matricula?");
    scanf("%i", &resposta);

    for (int i = 0; i < 7; i++) //resolucao com laco 
    {
        dados[i][0] += i;

        if (dados[i][0] == resposta)
        {
            printf("%i", dados[i][1]);
        }
    }

    return 0;
}