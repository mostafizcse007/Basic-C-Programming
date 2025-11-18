#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    if (1 < num && num < 1000)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", i, num, i * num);
        }
    }
    return 0;
}