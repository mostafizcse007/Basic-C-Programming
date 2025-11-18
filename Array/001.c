#include <stdio.h>
int main(void)
{
    int num, sum = 0, total = 0;
    printf("Enter how many numbers you want to calculate: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter %d numbers: ", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Odd numbers are: ");
    for (int i = 0; i < num; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum += arr[i];
            printf("%d ", arr[i]);
            total += 1;
        }
    }
    printf("\nTotal odd numbers are: %d\n", total);
    printf("Sum of all odd numbers: %d\n", sum);
    return 0;
}