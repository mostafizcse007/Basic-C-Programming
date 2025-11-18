#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (a * 10 >= b)
            printf("%d\n", b * c);
        else
            printf("%d\n", a * 10 * c);
    }
    return 0;
}