#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        double d = (double)a + (double)b;
        d /= 2;
        if (d > c)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}