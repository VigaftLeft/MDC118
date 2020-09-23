#include <stdio.h>

int main()
{
    printf("%d, ", 1);
    printf("%d, ", 2);
    printf("%d, ", 3);
    printf("%d, ", 4);
    printf("%d, ", 5);
    printf("%d, ", 6);
    printf("%d,\n", 7);

    /* sintaxe normal */
    for(int i=10; i<=20; i++) // contador incrementando de 1
    {
        printf("%d, ", i);
    }
    printf("\n");

    for(int i=0; i<=20; i=i+2) // contador incrementando de 2
    {
        printf("%d, ", i);
    }
    printf("\n");

    for(int i=10; i>0; i--) // contador decrementando de 1
    {
        printf("%d, ", i);
    }
    printf("\n");

    /* for aninhados */
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            printf("%d,%d ", i, j);
        }
    }
    printf("\n");

    /* for infinito */
    for(;;) {
        printf("Entre com 1 a 4: ");
        char opcao = getchar();
        switch(opcao) {
            case '1': printf("opcao 1\n"); break;
            case '2': printf("opcao 2\n"); break;
            case '3': printf("opcao 3\n"); break;
            case '4': printf("opcao 4\n"); break;
            default: printf("opcao invalida\n"); break;
        }
        if (opcao == '0') break;
    }

    return 0;
}