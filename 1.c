#include <stdio.h>
#include <math.h>

int mdc(int a, int b)
{
    int bigger = 0;
    int smallest = 0;
    int divider = 1;

    int maxDivider = 1;

    if (a > b)
    {
        bigger = a;
        smallest = b;
    }

    else
    {
        bigger = b;
        smallest = a;
    }

    while (divider <= smallest)
    {
        if (bigger % divider == 0 && smallest % divider == 0)
        {
            maxDivider = divider;
        }

        divider++;
    }

    return maxDivider;
}

int main(int argc, char const *argv[])
{

    int a = 0;
    int b = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    int r = mdc(a, b);

    printf("Resultado: %d\n", r);

    return 0;
}
