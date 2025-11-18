#include <stdio.h>
int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if (i % 2 == 0)
            arr[i] += 10;
        else
            arr[i] *= 2;
        printf("%d\t", arr[i]);
    }
    return 0;
}