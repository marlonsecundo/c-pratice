#include <stdio.h>

float factorial(int number)
{
    if (number == 1)
        return number;

    return number * factorial(number - 1);
}

float naturalLog(int number)
{
    float division = 0;

    for (int i = 1; i <= number; i++)
    {

        division += 1 / factorial(i);
    }

    return 1.0f + division;
}

int main(int argc, char const *argv[])
{
    int a = 0;

    printf("Digite o numero: ");
    scanf("%d", &a);

    float r = naturalLog(a);

    printf("Logaritmo Natural: %f", r);

    return 0;
}
