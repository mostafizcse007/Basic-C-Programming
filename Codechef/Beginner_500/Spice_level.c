#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a;
        scanf("%d", &a);
        if (a < 4)
            printf("MILD\n");
        else if (a >= 4 && a < 7)
            printf("MEDIUM\n");
        else
            printf("HOT\n");
    }
    return 0;
}