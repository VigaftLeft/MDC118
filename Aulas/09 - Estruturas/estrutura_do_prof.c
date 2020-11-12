#include <stdio.h>

// declarar uma estrutura sem variavel
struct endereco_t
{
    char logradouro[30];
    short int numero;
    unsigned int cep;
    char bairro[15];
};

struct contato_t
{
    char nome[30];
    unsigned int telefone;
    struct endereco_t endereco;
};

// declarar uma estrutura sem identificador
// struct {
//     char logradouro[30];
//     short int numero;
//     unsigned int cep;
//     char bairro[15];
// } meu_endereco;

// declarar uma estrutura com identificador e variavel
// struct endereco {
//     char logradouro[30];
//     short int numero;
//     unsigned int cep;
//     char bairro[15];
// } meu_endereco;

int main()
{
    struct endereco_t meu_endereco;

    printf("Entre com logradouro: ");
    scanf("%[^\n]s", meu_endereco.logradouro);
    printf("Entre com numero: ");
    scanf("%hd", &meu_endereco.numero);
    printf("Entre com cep: ");
    scanf("%ui", &meu_endereco.cep);
    getchar();
    printf("Entre com bairro: ");
    scanf("%[^\n]s", meu_endereco.bairro);

    printf("\nEntre com um endereco:\n");
    scanf("%s %hd %ui %s",
        meu_endereco.logradouro,
        &meu_endereco.numero,
        &meu_endereco.cep,
        meu_endereco.bairro
    );

    printf("\nMeu endereco:\n");
    printf("%s, %d - CEP %ui - %s\n",
           meu_endereco.logradouro,
           meu_endereco.numero,
           meu_endereco.cep,
           meu_endereco.bairro);

    struct contato_t meu_contato; // um contato
    struct contato_t lista_contatos[10]; // dez contatos

    printf("Entre com nome: ");
    scanf("%[^\n]s", meu_contato.nome);
    printf("Entre com numero: ");
    scanf("%ui", &meu_contato.telefone);
    getchar();
    printf("Entre com logradouro: ");
    scanf("%[^\n]s", meu_contato.endereco.logradouro);
    printf("Entre com numero: ");
    scanf("%hd", &meu_contato.endereco.numero);
    printf("Entre com cep: ");
    scanf("%ui", &meu_contato.endereco.cep);
    getchar();
    printf("Entre com bairro: ");
    scanf("%[^\n]s", meu_contato.endereco.bairro);

    printf("\nMeu contato:\n");
    printf("%s\n Telefone %u\n Endereco %s, %d - CEP %u - %s\n",
           meu_contato.nome,
           meu_contato.telefone,
           meu_contato.endereco.logradouro,
           meu_contato.endereco.numero,
           meu_contato.endereco.cep,
           meu_contato.endereco.bairro);

    return 0;
}
