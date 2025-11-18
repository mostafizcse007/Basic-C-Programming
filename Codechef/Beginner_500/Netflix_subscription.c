#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (a + b >= d || a + c >= d || b + c >= d)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}