#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a;
        scanf("%d", &a);
        if (a <= 30)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}