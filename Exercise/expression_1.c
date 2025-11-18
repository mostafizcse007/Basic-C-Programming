#include <stdio.h>
int main(void)
{
    int a = 5, b = 16, d = 2;
    int x = b++ - 2 / 4 * 2 + --d - ++a;
    printf("%d\n", x);
    printf("%d\n", x);

    return 0;
}