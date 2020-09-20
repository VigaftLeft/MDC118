#include <stdio.h>

int main(void)
{  
    int var0 = 10; //atribuicao
    int var1 = 10;
    
    printf("%d\n", var0);

    var0 = 20; //atribuicao
    
    printf("%d\n",var0);

    int var2;
    var2 = var0 + var1;
    
    printf("%d\n", var2);

    return 0;
}