#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        printf("%d\n", a * b * c);
    }
    return 0;
}