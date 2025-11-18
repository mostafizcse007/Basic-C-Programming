#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    int i = 0;
    while (i < test)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (a == b && b == c)
            printf("No\n");
        else if (a + b < c || b + c < a || c + a < b)
            printf("Yes\n");
        else
            printf("No\n");
        i++;
    }
    return 0;
}