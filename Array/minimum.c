#include <stdio.h>
#include <limits.h>
int main(void)
{
    int size, min;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    printf("Minimum value of this array is %d\n", min);
    return 0;
}