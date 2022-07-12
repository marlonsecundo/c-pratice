#include <stdio.h>

int neighborsCount(int i, int j, char matrix[15][15])
{

    int neighborsCount = 0;

    int leftPos[] = {i, j - 1};
    int rightPos[] = {i, j + 1};
    int topPos[] = {i - 1, j};
    int bottomPos[] = {i + 1, j};

    int topLeftPos[] = {i - 1, j - 1};
    int topRightPos[] = {i - 1, j + 1};

    int bottomLeftPos[] = {i + 1, j - 1};
    int bottomRightPos[] = {i + 1, j + 1};

    int neighborsArray[8][2] = {
        {leftPos[0], leftPos[1]},
        {rightPos[0], rightPos[1]},
        {topPos[0], topPos[1]},
        {bottomPos[0], bottomPos[1]},
        {topLeftPos[0], topLeftPos[1]},
        {topRightPos[0], topRightPos[1]},
        {bottomLeftPos[0], bottomLeftPos[1]},
        {bottomRightPos[0], bottomRightPos[1]},
    };

    for (int k = 0; k < 8; k++)
    {
        int iPos = neighborsArray[k][0];
        int jPos = neighborsArray[k][1];

        if (iPos < 0 || iPos >= 15)
            continue;

        if (jPos < 0 || jPos >= 15)
            continue;

        if (matrix[iPos][jPos] == '*')
        {
            neighborsCount++;
        }
    }

    return neighborsCount;
}

int main(int argc, char const *argv[])
{
    int i = 0;

    printf("Digite a posicao i: ");
    scanf("%d", &i);

    int j = 0;

    printf("Digite a posicao j: ");
    scanf("%d", &j);

    char matrix[15][15] = {
        {' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    };

    int result = neighborsCount(i, j, matrix);

    printf("Numero de vizinhos: %d", result);

    return 0;
}