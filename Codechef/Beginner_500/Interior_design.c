#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (a + b <= c + d)
            printf("%d\n", a + b);
        else
            printf("%d\n", c + d);
    }
    return 0;
}