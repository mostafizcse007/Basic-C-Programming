#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        int d, e, f;
        d = a + b;
        e = a * c;
        f = e / d;
        c -= f;
        printf("%d\n", c);
    }
    return 0;
}