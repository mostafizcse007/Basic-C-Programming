#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a;
        scanf("%d", &a);
        if (a <= 3)
            printf("BRONZE\n");
        else if (a > 3 && a <= 6)
            printf("SILVER\n");
        else
            printf("GOLD\n");
    }
    return 0;
}