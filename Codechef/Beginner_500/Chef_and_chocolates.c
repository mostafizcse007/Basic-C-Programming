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
        a -= b;
        printf("%d\n", a * c);
        i++;
    }
    return 0;
}