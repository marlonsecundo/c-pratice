#include <stdio.h>

int length = 3;

int canWin(char matrix[length][length])
{

    int rowCount = 0;
    int columnCount = 0;
    int diagonalLeft = 0;
    int diagonalRight = 0;

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            // row
            if (matrix[i][j] == 'x')
            {
                rowCount += 1;
            }
            else if (matrix[i][j] == 'o')
            {
                rowCount -= 1;
            }

            // column
            if (matrix[j][i] == 'x')
            {
                columnCount += 1;
            }
            else if (matrix[j][i] == 'o')
            {
                columnCount -= 1;
            }
        }

        for (int i = 0, j = 0; i < length; i++, j++)
        {
            // diagonal left
            if (matrix[i][j] == 'x')
            {
                diagonalLeft += 1;
            }
            else if (matrix[i][j] == 'o')
            {
                diagonalLeft -= 1;
            }

            // diagonal right
            if (matrix[length - 1 - i][length - 1 - j] == 'x')
            {
                diagonalRight += 1;
            }
            else if (matrix[length - 1 - i][length - 1 - j] == 'o')
            {
                diagonalRight -= 1;
            }
        }

        if (rowCount >= 2 || columnCount >= 2 || diagonalLeft >= 2 || diagonalRight >= 2)
        {
            return 1;
        }

        rowCount = 0;
        columnCount = 0;
        diagonalLeft = 0;
        diagonalRight = 0;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    char matrix[length][length];
    char dummy;

    printf("Preencha a matrix:\n");

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            scanf("%c", &matrix[i][j]);
            scanf("%c", &dummy);
        }
    }

    int r = canWin(matrix);

    if (r == 1)
    {
        printf("Pode vencer na prox rodada");
    }
    else
    {
        printf("NÃO pode vencer na prox rodada");
    }

    return 0;
}