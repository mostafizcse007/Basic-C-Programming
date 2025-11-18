#include <stdio.h>
#include <limits.h>
int main()
{
    int num, max = INT_MIN;
    printf("Enter the size of the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    max += 1;
    int arr_2[max];
    for (int i = 0; i < max; i++)
    {
        arr_2[i] = 0;
    }
    for (int i = 0; i < num; i++)
    {
        arr_2[arr[i]]++;
    }
    for (int i = 0; i < max; i++)
    {
        if (arr_2[i] > 0)
            printf("%d - %d\n", i, arr_2[i]);
    }
    return 0;
}