#include <stdio.h>
#include <math.h>
int main(void)
{
    int x;
    int total = 0;
    printf("Enter how many numbers you want to check: ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        int count = 0, num = i;
        int num_1 = sqrt(i);
        
        for (int j = 2; j <= num_1; j++)
        {
            if (num % j == 0)
            {
                count = 1;
            }
        }
        if ((count == 0 && num != 1) || num == 2 || num == 3)
        {

            printf("%d is a prime number.\n", num);
            total++;
        }
        /*else
            printf("%d is not a prime number.\n", num);*/
    }
    printf("%d\n", total);
    return 0;
}