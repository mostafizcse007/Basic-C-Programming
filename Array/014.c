#include <stdio.h>
int main(void)
{
    int size, num, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the number you want to compare: ");
    scanf("%d", &num);
    int arr[size];
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == num)
                count++;
        }
    }
    printf("There are total %d pair equals to %d\n", count, num);
    return 0;
}