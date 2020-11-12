#include <stdio.h>

const int DOMINGO = 0;
const int SEGUNDA = 1;
const int TERCA = 2;
const int QUARTA = 3;
const int QUINTA = 4;
const int SEXTA = 5;
const int SABADO = 6;

// começa de 0
enum dias { dom, seg, ter, qua, qui, sex, sab };
enum genero { masculino=1, feminino=2 };
enum status { ativo=1, inativo=0 };

int main() {

    int dia_da_semana;

    printf("Informe o dia da semana: ");
    scanf("%d", &dia_da_semana);

    if (dia_da_semana == dom || dia_da_semana == sab)
        printf("NAO eh dia util\n");
    else
        printf("Eh dia util\n");

    return 0;
}