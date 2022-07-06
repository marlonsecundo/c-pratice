#include <stdio.h>
#include <math.h>

int canFormATriangle(int a, int b, int c)
{
    int ab = a + b;
    int ac = a + c;
    int bc = b + c;

    if (ab > c && ac > b && bc > a)
    {
        return 1;
    }

    return 0;
}

int main(int argc, char const *argv[])
{

    int a = 0;
    int b = 0;
    int c = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    int r = canFormATriangle(a, b, c);

    if (r == 1)
    {
        printf("Resultado: SIM\n");
    }
    else
    {
        printf("Resultado: NÃO\n");
    }

    return 0;
}
