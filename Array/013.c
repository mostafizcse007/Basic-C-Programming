#include <stdio.h>
int main(void)
{
    int size, sum_even = 0, sum_odd = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if (i % 2 == 0)
            sum_even += arr[i];
        else
            sum_odd += arr[i];
    }
    int diff = sum_even - sum_odd;
    printf("Difference between even and odd indicies: %d\n", diff);
    return 0;
}