#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    if (test >= 1 && test <= 1000)
    {
        int i = 0;
        while (i < test)
        {
            int a, b, c, d;
            scanf("%d%d%d%d", &a, &b, &c, &d);
            d *= c, a += d;
            if (b == a)
                printf("filled\n");
            else if (b < a)
                printf("overflow\n");
            else
                printf("unfilled\n");
            i++;
        }
    }
    return 0;
}