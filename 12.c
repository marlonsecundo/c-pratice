#include <stdio.h>
#include <string.h>

int validPassword(char *username)
{
    char a = 'a';
    char z = 'z';

    char A = 'A';
    char Z = 'Z';

    char zero = '0';
    char nine = '9';

    char underline = '_';

    int length = strlen(username);

    if (username[0] >= zero && username[0] <= nine)
    {
        return 0;
    }

    for (int i = 0; i < length - 1; i++)
    {
        if (username[i] != underline)
        {
            if (username[i] > Z && username[i] < a)
            {
                return 0;
            }
            else if (username[i] < zero)
            {
                return 0;
            }
            else if (username[i] > nine && username[i] < A)
            {
                return 0;
            }
            else if (username[i] > z)
            {
                return 0;
            }
        }
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    int length = 100;
    char word[length];

    printf("Digite o nome de usuario: ");
    fgets(word, length, stdin);

    int r = validUsername(word);

    if (r == 1)
    {
        printf("O usuário eh válido\n");
    }
    else
    {
        printf("O usuario eh invalido\n");
    }

    return 0;
}
