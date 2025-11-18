#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a > b * 10)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}