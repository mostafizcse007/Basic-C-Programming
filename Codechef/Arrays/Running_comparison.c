#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int num;
        scanf("%d", &num);
        int arr1[num], arr2[num];
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &arr1[j]);
        }
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &arr2[j]);
        }
        int count = 0;
        for (int j = 0; j < num; j++)
        {
            if (arr1[j] * 2 >= arr2[j] && arr2[j] * 2 >= arr1[j])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}