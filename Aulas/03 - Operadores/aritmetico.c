#include <stdio.h>

int main(void)
{ 
    int x = 10;
    int y = 20;
    int z;
    /*int x;
      int y; 
      int x, y*/
    //operador soma
    z = x + y;
    printf("%d\n", z);
    printf("%d\n", x + y);

    //operador de subtracao
    z = x - y;
    printf("%d\n", z);
    printf("%d\n", x - y);

    //operador de multiplicacao
    z = x * y;
    printf("%d\n", z);
    printf("%d\n", x * y);

    //operador de divisao
    z = x / y;
    printf("%d\n", z); // conversao = 0 pois double para int, logo 0,5 = 0
    
    double w = x / y; // conversao implicita
    printf("%lf\n", w);

    w = x * 1.0 / y; // converao implicita
    printf("%lf\n", w);

    printf("%lf\n", (double) x / y); // conversao explicita

    //operador de divisao (resto)
    z = x % y;  // 10 / 20 == 0, resto 10
    printf("%d\n", z); 
    
    // 4 % 2 == 0??
    // 3 % 2 == 0??
    z = x++;
        printf("%d\n", z);
    z = ++x;
        printf("%d\n", z);
    // operador de incremento 
    // x++ usa o valor de x = x + 1; usa o valor de x, depois incrementa;
    // ++x incrementa x, depois usa o valor 

    printf("%d\n", x++);
    printf("%d\n", ++x);

    // x-- usa o valor de x = x - 1; usa o valor de x, depois decresce;
    // --x descresce x, depois usa o valor

    printf("%d\n", x--);
    printf("%d\n", --x);

    // forma concatenada
    x += 1; // x = x + 1;
    x -= 1; // x = x - 1;
    x *= 1; // x = x * 1;
    x /= 1; // x = x / 1;
    x %= 1; // x = x % 1;

    return 0;
}