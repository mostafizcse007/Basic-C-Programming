#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    a -= b;
    if (a >= 18)
        printf("RCB\n");
    else
        printf("CSK\n");
    return 0;
}