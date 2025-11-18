#include <stdio.h>
#include <math.h>
int main(void)
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int num_1 = sqrt(num);
    for (int i = 2; i <= num_1; i++)
    {
        if (num % i == 0)
        {
            count = 1;
        }
    }
    if ((count == 0 && num != 1) || num == 2 || num == 3)
    {
        printf("%d is a prime number.\n", num);
    }
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}