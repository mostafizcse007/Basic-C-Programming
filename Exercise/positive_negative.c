#include <stdio.h>
int main(void)
{
    int arr[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Positive numbers are ");
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] >= 0)
            printf("%d ", arr[i]);
    }

    printf("\nNegative numbers are ");
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < 0)
            printf("%d ", arr[i]);
    }
    return 0;
}