#include <stdio.h>
int main(void)
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("Memory allocation of index %d is %p\n", i, arr[i]);
    }
    return 0;
}