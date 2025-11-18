#include <stdio.h>
void call(int, int);
void main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    call(a, b);
    printf("%d %d\n", a, b);
}
void call(int x, int y)
{
    printf("%d %d\n", y, x);
}
