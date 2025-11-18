#include <stdio.h>
int main()
{
    int test, i = 0;
    scanf("%d", &test);
    while (i < test)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        b *= 3;
        printf("%d\n", a / b);
        i++;
    }
    return 0;
}