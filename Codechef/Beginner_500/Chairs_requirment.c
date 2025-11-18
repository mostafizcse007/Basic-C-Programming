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
            printf("0\n");
        else
            printf("%d\n", a - b);
    }
    return 0;
}