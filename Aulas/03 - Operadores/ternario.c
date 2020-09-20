#include <stdio.h>

int main(void)
{
    int x = 15;
    int y = 20;

    printf("%d\n", x % 2 == 0); // 1 e impar
    printf("%d\n", y % 2 == 0); // 0 e par

    /* operador ternario (expressao) ? verdadeiro : falso */
    printf("%s\n", x % 2 == 0 ? "e par": "e impar"); // 1 e impar
    printf("%s\n", y % 2 == 0 ? "e par": "e impar"); // 0 e par

    x = y > 15 ? 0 : 1;
    printf("%d\n", x);

    return 0;
}