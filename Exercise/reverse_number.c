#include <stdio.h>
int main(void)
{
    int num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int num_1 = num;
    while (num > 0)
    {
        reverse = num % 10 + reverse * 10;
        num /= 10;
    }
    printf("%d reverse %d\n", num_1, reverse);
    return 0;
}