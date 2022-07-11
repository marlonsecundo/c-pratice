#include <stdio.h>

int isLatinoMatrix(int m, int n, int matrix[m][n])
{

    int count = 0;

    if (m != n)
        return 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            for (int k = 0; k < n; k++)
            {
                if (matrix[i][k] == j + 1)
                {
                    matrix[i][k] = -1;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            int a = matrix[i][j];
            if (matrix[i][j] != -1)
            {

                return 0;
            }
        }
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

    int r = isLatinoMatrix(m, n, matrix);

    if (r == 1)
    {
        printf("É uma matrix quadrado latino");
    }
    else
    {
        printf("NÃO é uma matrix quadrado latino");
    }

    return 0;
}