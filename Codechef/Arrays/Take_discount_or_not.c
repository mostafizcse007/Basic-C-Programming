#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int item, coupon, reduce, sum_1 = 0, sum_2 = 0;
        scanf("%d%d%d", &item, &coupon, &reduce);
        int arr[item];
        for (int j = 0; j < item; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int j = 0; j < item; j++)
        {
            sum_1 += arr[j];
        }
        for (int j = 0; j < item; j++)
        {
            if (arr[j] <= reduce)
                arr[j] = 0;
        }
        for (int j = 0; j < item; j++)
        {
            if (arr[j] != 0)
                arr[j] -= reduce;
        }
        for (int j = 0; j < item; j++)
        {
            sum_2 += arr[j];
        }
        sum_2 += coupon;
        if (sum_2 < sum_1)
            printf("coupon\n");
        else
            printf("no coupon\n");
    }
    return 0;
}