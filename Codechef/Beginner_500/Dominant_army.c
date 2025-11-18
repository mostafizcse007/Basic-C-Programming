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
        if (a + b < c || a + c < b || b + c < a)
            printf("Yes\n");
        else
            printf("No\n");
        i++;
    }
    return 0;
}