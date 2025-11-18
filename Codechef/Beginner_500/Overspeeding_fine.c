#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a;
        scanf("%d", &a);
        if (a <= 70)
            printf("0\n");
        else if (a > 70 && a <= 100)
            printf("500\n");
        else if (a > 100)
            printf("2000\n");
    }
    return 0;
}