#include <stdio.h>
int main()
{
    int test, i = 0;
    scanf("%d", &test);
    while (i < test)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (c < a)
            printf("0\n");
        else if (a + b <= c)
            printf("2\n");
        else
            printf("1\n");
        i++;
    }
    return 0;
}