#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    a *= 2, b *= 2;
    a += b;
    if (a >= 1000)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}