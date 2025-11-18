#include <stdio.h>
int main(void)
{
    int num, sum = 0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}