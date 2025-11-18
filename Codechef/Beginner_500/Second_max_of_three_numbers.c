#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (a == b && b == c)
            printf("%d\n", a);
        if ((a > b && a < c) || (a > c && a < b))
        {
            printf("%d\n", a);
        }
        else if ((b > a && b < c) || (b < a && b > c))
        {
            printf("%d\n", b);
        }
        else if ((c > a && c < b) || (c < a && c > b))
        {
            printf("%d\n", c);
        }
    }
    return 0;
}