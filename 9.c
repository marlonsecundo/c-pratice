#include <stdio.h>
#include <string.h>

char *cesarEncrypt(char *str, int n)
{

    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        str[i] += n;
    }

    return str;
}

int main(int argc, char const *argv[])
{
    int length = 500;
    char str[length];

    printf("Digite a frase: ");
    fgets(str, length, stdin);

    int a = 0;

    printf("Digite o numero: ");
    scanf("%d", &a);

    char *encrypted = cesarEncrypt(str, a);

    printf("A frase encriptada eh:\n%s", encrypted);

    return 0;
}
