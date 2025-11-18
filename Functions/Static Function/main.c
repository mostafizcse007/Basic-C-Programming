#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int c = sum(a, b);
    printf("%d\n", c);
    return 0;
}