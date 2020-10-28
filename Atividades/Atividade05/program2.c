#include <stdio.h>

const int MATRICULA = 1; 

int main()
{
    int mat;
    int dados[7][2] = {{1111, 30001000}, {2222, 30002000}, {3333, 30003000}, {4444, 30004000}, {5555, 30005000}, {6666, 30006000}, {7777, 30007000}};
    
    printf("digite a matricula: ");
    scanf("%i", &mat);

    switch (mat)
    {
    case 1111:
        printf("Seu numero é: %i\n", dados[0][MATRICULA]);
        break;
    case 2222:
        printf("Seu numero é: %i\n", dados[1][MATRICULA]);
        break;
    case 3333:
        printf("Seu numero é: %i\n", dados[2][MATRICULA]);
        break;
    case 4444:
        printf("Seu numero é: %i\n", dados[3][MATRICULA]);
        break;
    case 5555:
        printf("Seu numero é: %i\n", dados[4][MATRICULA]);
        break;
    case 6666:
        printf("Seu numero é: %i\n", dados[5][MATRICULA]);
        break;
    case 7777:
        printf("Seu numero é: %i\n", dados[6][MATRICULA]);
        break;
    default:
        printf("digite a matricula certa!\n");
        
    }

    return 0;
}