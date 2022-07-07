#include <stdio.h>
#include <string.h>

int repeatCharCount(char *str, char c)
{
    int length = strlen(str);

    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }

    return count;
}

int main(int argc, char const *argv[])
{
    int length = 500;
    char c = ' ';
    char str[length];

    printf("Digite a string: ");
    fgets(str, length, stdin);

    printf("Digite o caractere: ");
    scanf("%c", &c);

    int k = repeatCharCount(str, c);

    printf("Numero de Apariçoes: %d\n", k);

    return 0;
}
