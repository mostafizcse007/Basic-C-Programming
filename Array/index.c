#include <stdio.h>
int main(void)
{
    int size, element;
    printf("Enter size of array and the number you want to search: ");
    scanf("%d%d", &size, &element);
    int arr[size];
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            printf("Index of %d is %d\n", element, i);
    }
    return 0;
}