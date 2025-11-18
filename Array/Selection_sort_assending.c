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
        int smallest = i;
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
                smallest = j;
        }
        int temp = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}