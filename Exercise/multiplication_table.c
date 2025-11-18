#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication Table of %d is: \n", num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }
    return 0;
}