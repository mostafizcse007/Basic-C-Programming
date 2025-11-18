#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if ((double)a / 2 <= b)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}