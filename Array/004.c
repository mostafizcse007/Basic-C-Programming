#include <stdio.h>
int main(void)
{
    int i, number[10];
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }
    for (i = 9; i >= 0; i--)
    {
        printf("%d\n", number[i]);
    }
    return 0;
}