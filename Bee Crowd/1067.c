#include <stdio.h>
int main(void)
{
    int odd;
    scanf("%d", &odd);
    for (int i = 1; i <= odd; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}