#include <stdio.h>
int main(void)
{
    int a = 5, b = 7, c = 4, d = 8, e = 9;
    a *= a = b ? (c * d) && e : (c * d) % b;
    printf("%d\n", a);
    return 0;
}