
#include <stdio.h>
int main(void)
{
    int size, temp;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before reversing: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("After reversing: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}