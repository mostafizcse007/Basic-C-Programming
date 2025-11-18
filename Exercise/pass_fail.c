#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d\n", a);
        if (a >= 40)
            printf("Pass\n");
        else
            printf("Fail\n");
    }

    else if (b > a && b > c)
    {
        printf("%d\n", b);
        if (b >= 40)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    else
    {
        printf("%d\n", c);
        if (c >= 40)
            printf("Pass\n");
        else
            printf("Fail");
    }
    return 0;
}