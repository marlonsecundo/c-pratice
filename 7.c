#include <stdio.h>
#include <string.h>

int toSeconds(int hour, int minute, int seconds)
{
    return (hour * 60 * 60) + (minute * 60) + seconds;
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

    int totalSeconds = toSeconds(a, b, c);

    printf("Total em segundos: %d\n", totalSeconds);

    return 0;
}
