#include <stdio.h>

float centroid(int k, int n, int array[n])
{
    float sum1 = 0;
    float sum2 = 0;

    for (int i = 0; i < k; i++)
    {
        sum1 += array[i];
    }

    for (int j = k + 1; j <= n - 1; j++)
    {
        sum2 += array[j];
    }

    float result = sum1 - sum2;

    if (result < 0)
    {
        result = -1 * result;
    }

    return result;
}

int main(int argc, char const *argv[])
{
    int n = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int array[n];

    int k = 0;

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    printf("Preencha o vetor:\n");

    for (int j = 0; j < n; j++)
    {
        scanf("%f", &array[n]);
    }

    float result = centroid(k, n, array);

    printf("O baricentro eh: %f", result);
}
