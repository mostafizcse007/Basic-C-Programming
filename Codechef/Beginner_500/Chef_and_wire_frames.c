#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        a *= 2, b *= 2, a += b, a *= c;
        printf("%d\n", a);
    }
    return 0;
}