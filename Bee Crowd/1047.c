#include <stdio.h>
int main(void)
{
    int a, b, c, d, e, f;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    {
        if ((c > a) && (d > b))
        {

            e = d - b;

            f = c - a;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", f, e);
        }
        else if (c < a && d < b)
        {
            d += 60;
            e = d - b;
            c += 23;
            f = c - a;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", f, e);
        }
        else if (c > a && d < b)
        {
            d += 60;
            e = d - b;
            c -= 1;
            f = c - a;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", f, e);
        }
        else if (c < a && d > b)
        {
            e = d - b;
            c += 24;
            f = c - a;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", f, e);
        }
        else if (c == a && d > b)
        {
            e = d - b;
            f = c - a;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", f, e);
        }
        else if (c == a && d < b)
        {
            d += 60;
            e = d - b;
            f = c - a;
            f += 23;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", f, e);
        }
        else if (c > a && d == b)
        {
            e = d - b;
            f = c - a;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", f, e);
        }
        else if (c < a && d == b)
        {
            e = d - b;
            f = a - c;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", f, e);
        }
        else if (a == c && b == d)
        {
            e = d - b;
            f = c - a;
            f += 24;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", f, e);
        }
    }
    return 0;
}