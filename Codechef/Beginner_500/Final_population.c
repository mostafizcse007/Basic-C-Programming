#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        a -= b, a += c;
        printf("%d\n", a);
    }
    return 0;
}