#include <stdio.h>

int main(void)
{
    printf("%d, ", 1);
    printf("%d, ", 2);
    printf("%d, ", 3);
    printf("%d, ", 4);
    printf("%d, ", 5);
    printf("%d, ", 6);
    printf("%d, \n", 7);
    /*sintaxe*/
    //for (inicializacao; condicao; incremento) //contador
    for (int i = 0; i < 10; i++) // incrementando 1
    {
        printf("%d ,", i);
    }
    printf("\n");

    for (int i = 0; i < 10; i += 2) // incrementando 2
    {
        printf("%d ,", i);
    }
    printf("\n");

    for (int i = 10; i > 0; i--) // decrementando 1
    {
        printf("%d ,", i);
    }
    printf("\n");

    /* for alinhados */
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                printf("%d,%d,%d", i, j, k);
            }
        }
    }
    printf("\n");

    /* for infinito */

    // ctrl + c para o programa

    /* um pocuo de get */
    for (;;)
    {
        printf("Entre com 1 a 4: ");
        char opcao = getchar();
        switch (opcao)
        {
        case '1':
            printf("opcao 1\n");
            break;
        case '2':
            printf("opcao 2\n");
            break;
        case '3':
            printf("opcao 3\n");
            break;
        case '4':
            printf("opcao 4\n");
            break;
        default:
            printf("opcao invalida\n");
            break;
        }
        if (opcao == '0')
            break;
    }
    return 0;
}