#include <stdio.h>
int main(void)
{
    int num, first, last;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    int num_1 = num;

    while (num >= 10)
    {
        num /= 10;
    }
    first = num;
    printf("First digit of %d is %d\n", num_1, first);
    last = num_1 % 10;
    printf("Last digit of %d is %d\n", num_1, last);
    int sum = first + last;
    printf("Sum of first and last digit= %d\n", sum);
    return 0;
}