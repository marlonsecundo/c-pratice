#include <stdio.h>

int isPermutationMatrix(int m, int n, int matrix[m][n])
{

    int count = 0;

    if (m != n)
        return 0;

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (matrix[i][j] == 1)
            {
                count++;
            }
        }

        if (count != 1)
        {
            return 0;
        }

        count = 0;
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    int m = 0;

    printf("Digite o numero de linhas: ");
    scanf("%d", &m);

    int n = 0;

    printf("Digite o numero de colunas: ");
    scanf("%d", &n);

    int matrix[m][n];

    printf("Preencha a matrix:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int r = isPermutationMatrix(m, n, matrix);

    if (r == 1)
    {
        printf("É uma matrix de permutação");
    }
    else
    {
        printf("NÃO é uma matrix de permutação");
    }

    return 0;
}