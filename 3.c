#include <stdio.h>
#include <math.h>

int primeNumber(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

int main(int argc, char const *argv[])
{

    int n = 100;
    printf("Numeros primos entre 1 e %d:\n", n);

    for (int i = 1; i <= 100; i++)
    {

        int r = primeNumber(i);

        if (r == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
