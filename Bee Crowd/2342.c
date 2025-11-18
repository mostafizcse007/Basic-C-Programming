#include <stdio.h>
int main(void)
{
    int a, b, c, d, e;
    char alp;
    scanf("%d", &a);
    scanf("%d %c %d", &b, &alp, &c);
    switch (alp)
    {
    case '+':
        if ((b + c) <= a)
        {
            printf("OK\n");
        }
        else
        {
            printf("OVERFLOW\n");
        }
        break;
    case '*':
        if ((b * c) <= a)
        {
            printf("OK\n");
        }
        else
        {
            printf("OVERFLOW\n");
        }
        break;
    default:
        printf("Invalid Operator");
    }

    return 0;
}