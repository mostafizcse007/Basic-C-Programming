#include <stdio.h>
int main(void)
{
    int num, positive = 0, negative = 0, even = 0, odd = 0;
    printf("Enter elements if the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter %d elements: ",num);
    for (int i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < num; i++)
    {
        if (arr[i] >= 0)
            positive++;
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] < 0)
            negative++;
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] % 2 != 0)
            odd++;
    }
    printf("Total %d elements are: ", num);
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nPositive = %d\nNegative = %d\nEven = %d\nOdd = %d\n", positive, negative, even, odd);
    return 0;
}