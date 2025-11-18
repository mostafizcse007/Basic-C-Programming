#include <stdio.h>
int main()
{
    int test, i = 0;
    scanf("%d", &test);
    while (i < test)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        b -= c, b *= d, a += b;
        printf("%d\n", a);
        i++;
    }
    return 0;
}