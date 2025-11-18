#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (b >= a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}