#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a;
        scanf("%d", &a);
        if (a % 2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}