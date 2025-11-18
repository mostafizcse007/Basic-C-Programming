#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num - 1; i++)
    {
        int biggest = i;
        for (int j = i + 1; j < num; j++)
        {
            if (arr[biggest] < arr[j])
                biggest = j;
        }
        int temp = arr[biggest];
        arr[biggest] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}