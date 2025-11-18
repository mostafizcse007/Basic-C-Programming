#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a;
        scanf("%d", &a);
        a *= 60;
        printf("%d\n", a / 20);
    }
    return 0;
}