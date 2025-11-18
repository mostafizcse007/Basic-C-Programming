#include <stdio.h>
int main(void)
{
    int num, sum = 0;
    printf("Enter how many numbers you want to calculate: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter %d numbers: ",num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nSum of all odd numbers: %d\n", sum);
    return 0;
}