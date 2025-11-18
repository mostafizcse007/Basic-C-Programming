#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (b > a)
    {
        printf("O JOGO DUROU %d HORA(S)\n", b - a);
    }
    else if (a == b)
    {
        b += 24;
        printf("O JOGO DUROU %d HORA(S)\n", b - a);
    }
    else if (b < a)
    {
        b += 24;
        printf("O JOGO DUROU %d HORA(S)\n", b - a);
    }
    return 0;
}