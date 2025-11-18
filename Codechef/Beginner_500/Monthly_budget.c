#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (b * 30 <= a)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}