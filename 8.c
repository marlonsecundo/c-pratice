#include <stdio.h>
#include <string.h>

void fromSeconds(int seconds)
{

    int hours = seconds / 60 / 60;

    int minutes = (seconds / 60) - (hours * 60);

    int restSeconds = seconds % 60;

    printf("%d:%d:%d", hours, minutes, restSeconds);
}

int main(int argc, char const *argv[])
{
    int a = 0;

    printf("Digite o numero: ");
    scanf("%d", &a);

    fromSeconds(a);

    return 0;
}
