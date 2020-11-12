#include <stdio.h>

struct lista_t
{
    char nome[30];
    unsigned int telefone;
};


int main()
{
    struct lista_t lista[10];

    for(int i = 0; i < 10; i++)
    {
        lista[i];
        printf("Nome: ");
        scanf("%[^\n]s", lista[i].nome);
        printf("Telefone: ");
        scanf("%i", &lista[i].telefone);
        getchar();
    }
    printf("\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%s --- %i\n", lista[i].nome, lista[i].telefone);
    }
    return 0;
}