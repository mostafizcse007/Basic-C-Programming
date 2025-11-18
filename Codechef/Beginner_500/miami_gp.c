#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);
    int i = 0;
    while (i < test)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        double c = (double)a * 1.07;
        if (b <= c)
            printf("Yes\n");
        else
            printf("No\n");
        i++;
    }
    return 0;
}
