#include <stdio.h>
int rect(int x, int y)
{
    x *= y;
    return x;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int area = rect(a, b);
    printf("%d\n", area);
    return 0;
}