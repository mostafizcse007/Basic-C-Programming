#include <stdio.h>
#include <limits.h>
int main(void)
{
    int size, max, sec_max;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    max = INT_MIN, sec_max = INT_MIN;
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            sec_max = max;
            max = arr[i];
        }
        else if (arr[i] > sec_max && arr[i] != max)
            sec_max = arr[i];
    }

    printf("Second largest element of this array is : %d\n", sec_max);
    return 0;
}