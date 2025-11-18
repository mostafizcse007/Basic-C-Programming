#include <stdio.h>
int value(int *, int *);
int main()
{
    int a = 10, b = 20;
    value(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
int value(int *x, int *y)
{
    *x = 20, *y = 10;
}