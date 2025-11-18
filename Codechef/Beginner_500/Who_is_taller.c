#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a > b)
            printf("A\n");
        else
            printf("B\n");
    }
    return 0;
}