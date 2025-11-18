#include <stdio.h>
#include <limits.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int num, max = INT_MIN, sec_max = INT_MIN;
        scanf("%d", &num);
        int arr[num];
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int j = 0; j < num; j++)
        {
            if (arr[j] > max)
            {
                sec_max = max;
                max = arr[j];
            }
            else if (arr[j] > sec_max && arr[j] != max)
                sec_max = arr[j];
        }
        max += sec_max;
        printf("%d\n", max);
    }
    return 0;
}