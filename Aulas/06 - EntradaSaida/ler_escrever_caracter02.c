#include <stdio.h>


int main()
{
    int ch;
    for (ch = 33; ch <= 126; ch++)
    {
        putc(ch, stdout);
    }

    return (0);
}