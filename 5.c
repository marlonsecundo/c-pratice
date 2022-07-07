#include <stdio.h>
#include <stdlib.h>

int inverseNumber(int number)
{
    int inverse = 0;
    int rest = 0;

    while (number != 0)
    {
        rest = number % 10;
        inverse = inverse * 10 + rest;
        number /= 10;
    }

    return inverse;
}
int main(int argc, char const *argv[])
{
    int a = 0;
    printf("Digite o numero: ");
    scanf("%d", &a);

    int k = inverseNumber(a);

    printf("Inverso: %d\n", k);

    return 0;
}
