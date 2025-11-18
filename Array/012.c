#include <stdio.h>
int main(void)
{
    int size, num, count = 0;
    printf("Enter the number of the array: ");
    scanf("%d", &size);
    printf("Enter the number do you want to compare ");
    scanf("%d", &num);
    int arr[size];
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > num)
            count++;
    }
    if (count == 0)
        printf("There is no element greater than %d\n", num);
    else
        printf("Trere are total %d elements greater than %d\n", count, num);
    return 0;
}