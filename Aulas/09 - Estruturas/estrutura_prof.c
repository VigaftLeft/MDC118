#include <stdio.h>

struct endereco_t
{
    char logradouro[30];
    short int numero;
    unsigned int cep;
    char bairro[15];
}; //se nao tiver a variavel aqui pode botar dentreo do codigo

//se precisar criar mais de uma variavel e necessario escrever dentro do struct
//pode-se ultiliazr o typedef para tirar o struct do main

struct contato_t
{
    char nome[30];
    unsigned int telefone;
    struct endereco_t endereco;
};

int main()
{
    struct endereco_t meu_endereco;
    printf("entre com logradouro: ");
    scanf("%[^\n]s", meu_endereco.logradouro);
    printf("entre com numero: ");
    scanf("%hi", &meu_endereco.numero);
    printf("entre com cep: ");
    scanf("%i", &meu_endereco.cep);
    getchar(); //precisa disso para ler a ultimo scanf
    printf("entre com bairro: ");
    scanf("%[^\n]s", meu_endereco.bairro);

    printf("\nMeu endereco?? \n ");
    printf("%s, %hi -CEP, %i, %s", meu_endereco.logradouro, meu_endereco.numero, meu_endereco.cep, meu_endereco.bairro);

    struct contato_t meu_contato;
    printf("\n");

    getchar();
    printf("Entre com nome: ");
    scanf("%[^\n]s", meu_contato.nome);
    printf("Entre com numero: ");
    scanf("%i", &meu_contato.telefone);
    getchar();
    printf("entre com logradouro: ");
    scanf("%[^\n]s", meu_endereco.logradouro);
    printf("entre com numero: ");
    scanf("%hi", &meu_endereco.numero);
    printf("entre com cep: ");
    scanf("%i", &meu_endereco.cep);
    getchar(); //precisa disso para ler a ultimo scanf
    printf("entre com bairro: ");
    scanf("%[^\n]s", meu_endereco.bairro);
   
   printf("\nMeu endereco?? \n ");
    printf("%s ,%i ,%s, %hi -CEP, %i, %s", meu_contato.nome, meu_contato.telefone, meu_endereco.logradouro, meu_endereco.numero, meu_endereco.cep, meu_endereco.bairro);


    return 0;
}