#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        a %= 3, b %= 3;
        if (a == b)
            printf("%d\n", a);
    }
    return 0;
}