#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a;
        scanf("%d", &a);
        printf("%.0lf\n", 100 - 100 * (double)a / 100);
    }
    return 0;
}