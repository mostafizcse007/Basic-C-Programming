#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        a *= 10;
        b *= 90;
        printf("%d\n", a + b);
    }
    return 0;
}