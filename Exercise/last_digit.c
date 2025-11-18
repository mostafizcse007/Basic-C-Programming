#include <stdio.h>
int main(void)
{
    int num, last;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    printf("Last digit of %d is %d\n", num, last);
    return 0;
}