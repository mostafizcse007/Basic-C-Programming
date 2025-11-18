#include <stdio.h>
int minimum(int x, int y)
{
    int min;
    if (x > y)
    {
        if (x > y)
            min = y;
    }
    else if (x < y)
        min = x;

    else if (x == y)
        min = y;
    return min;
}
int main(void)
{
    int a, b, mi;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    mi = minimum(a, b);
    printf("Minimum between %d and %d is = %d", a, b, mi);
    return 0;
}