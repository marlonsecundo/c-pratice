#include <stdio.h>
#include <math.h>

int factorial(int number)
{
    if (number == 1)
        return number;

    return number * factorial(number - 1);
}

int main(int argc, char const *argv[])
{
    int a = 0;

    printf("Digite o numero: ");
    scanf("%d", &a);

    int r = factorial(a);

    printf("Resultado: %d\n", r);

    return 0;
}
