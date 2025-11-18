#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int price;
        scanf("%d", &price);
        if (price * 4 <= 1000)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}