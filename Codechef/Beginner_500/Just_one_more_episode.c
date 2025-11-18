#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a;
        scanf("%d", &a);
        if (a > 24)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}