#include <stdio.h>
int main(void)
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int num_1=num;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of %d is %d\n", num_1, sum);
    return 0;
}