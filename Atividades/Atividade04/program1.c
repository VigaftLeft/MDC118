#include <stdio.h>

int main()
{
    int num1; 
    int num2;
    printf("Digite um numero: ");
    scanf("%i", &num1);
    printf("Digite outro numero: ");
    scanf("%i", &num2);
    
    if (num1 > num2) //condicao de maior menor
    {
        printf("%i > %i\n", num1, num2);
    }
    else if (num2 > num1)
    {
        printf("%i > %i\n", num2, num1);
    }
    else // caso nao entre paras as condicoes
    {
        printf("%i = %i\n", num1, num2);
    }

    return 0;
}