#include <stdio.h>
int main(void)
{
    int number, i, even = 0;
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d^2 = %d\n", i, i * i);
        }
    }
    return 0;
}