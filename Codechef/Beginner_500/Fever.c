#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a;
        scanf("%d", &a);
        if (a > 98)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}