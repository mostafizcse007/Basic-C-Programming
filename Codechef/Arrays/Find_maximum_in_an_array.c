#include <stdio.h>
#include <limits.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int num;
        scanf("%d", &num);
        int arr[num], max = INT_MIN;
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int j = 0; j < num; j++)
        {
            if (arr[j] > max)
                max = arr[j];
        }
        printf("%d\n", max);
    }
    return 0;
}