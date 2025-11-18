#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a;
        scanf("%d", &a);
        if (a <= 300)
            printf("3000\n");
        else
            printf("%d\n", a * 10);
    }
    return 0;
}