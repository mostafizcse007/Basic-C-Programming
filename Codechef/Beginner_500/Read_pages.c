#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        b *= c;
        if (b >= a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}