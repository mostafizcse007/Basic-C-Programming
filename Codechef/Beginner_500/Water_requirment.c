#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a;
        scanf("%d", &a);
        printf("%d\n", a * 2);
    }
    return 0;
}