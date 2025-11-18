#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a > b)
            printf("%d\n", a - b);
        else
            printf("%d\n", b - a);
    }
    return 0;
}