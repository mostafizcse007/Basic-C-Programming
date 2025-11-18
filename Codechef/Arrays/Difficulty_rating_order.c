#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int num;
        scanf("%d", &num);
        int arr[num], count = 0;
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int j = 0; j < num - 1; j++)
        {
            for (int k = j + 1; k < num; k++)
            {
                if (arr[j] > arr[k])
                    count++;
            }
        }
        if (count == 0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}