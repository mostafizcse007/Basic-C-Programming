#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int item, value, sum = 0;
        scanf("%d%d", &item, &value);
        int arr1[item];
        for (int j = 0; j < item; j++)
        {
            scanf("%d", &arr1[j]);
        }
        int arr2[item];
        for (int j = 0; j < item; j++)
        {
            scanf("%d", &arr2[j]);
        }
        for (int j = 0; j < item; j++)
        {
            if (value <= arr1[j])
                sum += arr2[j];
        }
        printf("%d\n", sum);
    }
    return 0;
}