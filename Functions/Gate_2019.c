#include <stdio.h>
int num(int x, int y)
{
    x = 2 * x + y;
    return x;
}
int main()
{
    int x = 2, y = 5;
    y = num(y, x);
    x = num(y, x);
    printf("%d\n", x);
    return 0;
}