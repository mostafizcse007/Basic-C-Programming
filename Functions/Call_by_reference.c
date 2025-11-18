#include <stdio.h>
void fun(int *x, int *y)
{
    *x = 5, *y = 5;
    printf("%d %d\n", *x, *y);
}
void main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    fun(&a, &b);
    printf("%d %d\n", a, b);
}