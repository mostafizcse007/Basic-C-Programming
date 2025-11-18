#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a * 100 == b * 10)
            printf("CLOTH\n");
        else if (a * 100 < b * 10)
            printf("DISPOSABLE\n");
        else
            printf("CLOTH\n");
    }
    return 0;
}