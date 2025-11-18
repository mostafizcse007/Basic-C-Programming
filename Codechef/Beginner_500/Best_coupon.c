#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int price;
        scanf("%d", &price);
        if ((double)price * 0.1 >= 100)
            printf("%.0lf\n", (double)price * 0.1);
        else
            printf("100\n");
    }
    return 0;
}