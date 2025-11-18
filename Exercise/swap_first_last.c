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
    last = num_1 % 10;
    printf("first digit %d and last digit %d\n", first, last);
    printf("After swapping: ");

    first = first ^ last;
    last = first ^ last;
    first = first ^ last;
    printf("first digit %d and last digit %d\n", first, last);
    return 0;
}