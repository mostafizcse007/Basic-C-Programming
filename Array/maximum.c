#include <stdio.h>
#include <limits.h>
int main(void)
{
    int size, max;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Maximum element of this array is: %d\n", max);
    return 0;
}