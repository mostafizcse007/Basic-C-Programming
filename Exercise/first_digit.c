#include <stdio.h>
int main(void)
{
    int num, first;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num >= 10)
    {
        num /= 10;
    }
    first = num;
    printf("First digit is %d\n", first);
    return 0;
}