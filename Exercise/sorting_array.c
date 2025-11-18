#include <stdio.h>
int main(void)
{
    int arr[5], temp;
    printf("Enter 5 elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before sorting: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nAfter sorting: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nLargest element of the array is %d\n", arr[4]);
    return 0;
}