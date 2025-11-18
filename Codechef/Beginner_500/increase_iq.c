#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 100 && a <= 169)
    {
        a += 7;
        if (a > 170)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}