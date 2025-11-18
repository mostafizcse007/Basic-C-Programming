#include <stdio.h>
int main(void)
{
    int num, sum_even = 0, sum_odd = 0;
    printf("Enter value for n: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter Data:\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum_even += arr[i];
        }
        else
        {
            sum_odd += arr[i];
        }
    }
    printf("Sum of even Numbers: %d\n", sum_even);
    printf("Sum of odd Numbers: %d\n", sum_odd);
    if (sum_even > sum_odd)
        printf("Congratulations! Even Win\n");
    else if (sum_even < sum_odd)
        printf("Congratulations! Odd Win\n");
    else
        printf("It's a tie!\n");
    return 0;
}