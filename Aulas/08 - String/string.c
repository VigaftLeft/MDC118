#include <stdio.h>
#include <string.h>

int main()
{
    char str[31] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};
    //memset(str, 0, sizeof(str));
    char outra[31];

    printf("entre com uma string: ");
    // fgets(str, 30, stdin) // {'t','e','s','t','e',' ','1','2','3','\n'....}
    // gets(str); // {'t','e','s','t','e',' ','1','2','3','\0'....}
    scanf("%[^\n]s", str); // {'t','e','s','t','e',' ','1','2','3','\0'....}
    // puts(str);
    printf("a string str = %-30s\n", str);

    for (int i = 0; i < 30; i++) //escreve os 30 espacos da array
    {
        printf("%c", str[i]);
    }

    printf("\nstrlen(str) = %li\n", strlen(str));
    printf("sizeof(str) = %li\n", sizeof(str));

    for (int i = 0; i < strlen(str); i++) //escreve so os caracteres escritos
    {
        printf("%c", str[i]);
    }

    // outra = str; da ruim
    strcpy(outra, str);
    printf("\na string outra = %-30s\n", outra);

    printf("outra == str? %d\n", outra == str);
    printf("strcmp(outra,str)? %d\n", strcmp(outra, str));

    // outra = outra + str; da ruim
    strcat(outra, str);
    printf("outra contactena com str = %-30s\n", outra);

    printf("outra == str? %d\n", outra == str);
    printf("strcmp(outra,str)? %d\n", strcmp(outra, str));
    printf("strcmp(str,outra)? %d\n", strcmp(str, outra));

    printf("achou 1 em outra? %s\n", strchr(outra, '1'));
    printf("achou 0 em outra? %s\n", strchr(outra, '0'));
    printf("achou 123 em outra? %s\n", strstr(outra, "123"));
    printf("achou 456 em outra? %s\n", strstr(outra, "456"));

    strcpy(outra, str);
    printf("stcpy(outra, str) = %-30s\n", outra);

    for (int i = 0; i < 30; i++)
    {
        printf("%c", outra[i]);
    }

    printf("\n");

    memset(outra, 0, sizeof(outra));
    strcpy(outra, str);

    for (int i = 0; i < 30; i++)
    {
        printf("%c", outra[i]);
    }

    printf("\n");

    return 0;
}