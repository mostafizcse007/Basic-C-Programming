#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    a *= 2, b *= 1;
    c *= 2, d *= 1;
    a += b, c += d;
    if (a == c)
        printf("Equal\n");
    else if (a > c)
        printf("Messi\n");
    else
        printf("Ronaldo\n");
    return 0;
}