#include <stdio.h>
#include <string.h>

char *hashString(char *str, char *key)
{

    int strLength = strlen(str);
    int keyLength = strlen(key);
    int i;

    for (i = 0; i < strLength; i++)
    {
        str[i] = str[i] ^ key[i % keyLength];
    }

    str[i] = '\0';

    return str;
}

int main(int argc, char const *argv[])
{
    int length = 500;
    char word[length];
    char key[length];

    printf("Digite a chave: ");
    fgets(key, length, stdin);

    key[strcspn(key, "\n")] = '\0';

    printf("Digite a frase: ");
    fgets(word, length, stdin);

    word[strcspn(word, "\n")] = '\0';

    char *hash = hashString(word, key);

    printf("Frase criptografada: %s\n", hash);

    hash = hashString(word, key);

    printf("Frase descriptografada: %s\n", hash);

    return 0;
}
