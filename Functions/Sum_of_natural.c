#include <stdio.h>
int sum(int x)
{
    int s = 0;
    if (x == 1)
        return x;
    s = x + sum(x - 1);
    return s;
}
void main()
{
    int a, b;
    scanf("%d", &b);
    a = sum(b);
    printf("%d\n", a);
}