#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        a -= c, b -= d;
        if (a == b)
            printf("any\n");
        else if (a < b)
            printf("first\n");
        else
            printf("second\n");
    }
    return 0;
}