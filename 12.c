#include <stdio.h>
#include <string.h>

int validUsername(char *username)
{
    char a = 'a';
    char z = 'z';

    char A = 'A';
    char Z = 'Z';

    char zero = '0';
    char nine = '9';

    char espacialChars[] = {'!', '@', '#', '$', '%', '&', '(', ')'};

    int length = strlen(username);

    int hasUppercase = 0;
    int hasNumber = 0;
    int hasEspecialChar = 0;

    if (username[0] >= zero && username[0] <= nine)
    {
        return 0;
    }

    for (int i = 0; i < length - 1; i++)
    {

        if (username[i] <= Z && username[i] >= A)
        {
            hasUppercase = 1;
        }
        else if (username[i] > zero && username[i] <= nine)
        {
            hasNumber = 1;
        }
        else
        {

            for (int j = 0; j < 8; j++)
            {
                if (username[i] == espacialChars[j])
                {
                    hasEspecialChar = 1;
                }
            }
        }
    }

    if (hasUppercase == 0)
    {
        return -1;
    }
    else if (hasNumber == 0)
    {
        return -2;
    }
    else if (hasEspecialChar == 0)
    {
        return -3;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    int length = 100;
    char word[length];

    printf("Digite o nome de usuario: ");
    fgets(word, length, stdin);

    int r = validUsername(word);

    printf("validação: %d\n", r);

    return 0;
}
