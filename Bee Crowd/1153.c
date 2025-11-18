#include <stdio.h>
int main(void)
{
    int num, multi = 1;
    scanf("%d", &num);
    for (int i = 2; i <= num; i++)
    {
        multi *= i;
    }
    printf("%d\n", multi);
    return 0;
}