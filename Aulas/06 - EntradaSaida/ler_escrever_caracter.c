#include <stdio.h>

/* leitura de caracteres */
//getc
    //int getc(FILEA *stream)
//getchar
// uma tecla por vez
/*escrita de caracteres */
// putc
// poutchar

int main()
{

    char ch = getc(stdin); // ler do teclado / enter para confirmar a leitura
    // getc(stream) -> stream e origem de leitura: entreada de rede, arquivo, teclado
    //stdin e o input -> teclado
    //stdout e o output -> tela
    while (ch != '0') // enquanto ch for diferente de zero
    {
        ch = getc(stdin);
    }
    putc(ch, stdout); // escreve na tela ou console
    //chama a varaivel, escreve no console (output)
    //putc(ch, stderr); //escreve a saida de erro

    getchar(); //PRESSIONAR ENTER, o ENTER conta como caracter
    

    ch = getchar(); //getc(stdin)
    putchar(ch);    // putc(stdout)
    
    // conclui-se que a getchar foi chamado 3 vezes
    return 0;
}