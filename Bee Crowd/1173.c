#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, num);
        num *= 2;
    }
    return 0;
}