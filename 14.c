#include <stdio.h>

float pi(int number)
{
    float sum = 0;

    float multiplier = 2.0;

    for (int i = 0; i < number; i++)
    {

        float fracion = 4 /
                        (multiplier * (multiplier + 1) * (multiplier + 2));

        if (i % 2 == 0)
        {
            sum += fracion;
        }
        else
        {
            sum -= fracion;
        }

        multiplier += 2;
    }

    return 3.0 + sum;
}

int main(int argc, char const *argv[])
{
    int a = 0;

    printf("Digite o numero: ");
    scanf("%d", &a);

    float r = pi(a);

    printf("PI: %f", r);

    return 0;
}