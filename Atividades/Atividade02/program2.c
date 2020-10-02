#include <stdio.h>

int main(void)
{
    float preco; // basta igualar o preco a qualquer numero.
    printf("Qual o valor: ");
    scanf("%f", &preco);

    if (preco >= 0)
    {

        if (preco <= 100)
        {
            float desconto = 0.99;
            float desconto_real = - desconto * 100 + 100;
            printf("seu preco com desconto é de: %.2f, seu desconto foi de %.0f por cento.\n", preco * desconto, desconto_real);
        }
        else if (preco >= 100.01 && preco <= 500)
        {
            float desconto = 0.95;
            float desconto_real = - desconto * 100 + 100;
            printf("seu preco com desconto é de: %.2f, seu desconto foi de %.0f por cento.\n", preco * desconto, desconto_real);
        }
        else
        {
            float desconto = 0.90;
            float desconto_real = - desconto * 100 + 100;
            printf("seu preco com desconto é de: %.2f, seu desconto foi de %.0f por cento.\n", preco * desconto, desconto_real);
        }
    }
    else if (preco < 0)
    {
        printf("nao aceita valor negativo\n");
    }
    return 0;
}