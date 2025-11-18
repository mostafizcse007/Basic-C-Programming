#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a == b)
            printf("any\n");
        else if (a > b)
            printf("new phone\n");
        else
            printf("repair\n");
    }
    return 0;
}