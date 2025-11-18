#include <stdio.h>
int main(void)
{
    int i, even = 0, number[5];
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &number[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (number[i] % 2 == 0)
        {
            even += 1;
        }
    }
    printf("%d valores pares\n", even);
    return 0;
}