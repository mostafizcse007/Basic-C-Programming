#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int num, count = 0;
        scanf("%d", &num);
        int arr[num];
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int j = 0; j < num - 1; j++)
        {
            for (int k = 0; k < num - j - 1; k++)
            {
                if (arr[k] > arr[k + 1])
                {
                    int temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;
                }
            }
        }
        for (int j = 1; j < num; j++)
        {
            if (arr[0] < arr[j])
            {
                // arr[j] = arr[0];
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}