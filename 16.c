#include <stdio.h>

int centroid(int n, int *array)
{
    int minK = 0;
    int minResult = 2147483647;

    for (int k = 0; k < n; k++)
    {
        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0; i < k; i++)
        {
            sum1 += array[i];
        }

        for (int j = k; j < n; j++)
        {
            int o = array[j];
            sum2 += array[j];
        }

        int result = sum1 - sum2;

        if (result < 0)
        {
            result = -1 * result;
        }

        if (result < minResult)
        {
            minResult = result;
            minK = k;
        }
    }

    return minK;
}

int main(int argc, char const *argv[])
{
    int n = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int array[n];

    printf("Preencha o vetor:");

    for (int j = 0; j < n; j++)
    {
        scanf("%d", &array[n]);
    }

    int result = centroid(n, array);

    printf("O baricentro (k) eh: %d", result);
}
