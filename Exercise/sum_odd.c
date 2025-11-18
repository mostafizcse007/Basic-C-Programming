#include <stdio.h>
int main(void)
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Odd numbers are: ");
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 != 0)
            printf("%d ", i);
        sum += i;
    }
    printf("Sum of odd between 0 to %d = %d\n", num, sum);
    return 0;
}