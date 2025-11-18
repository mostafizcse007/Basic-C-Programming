#include <stdio.h>
int main(void)
{
    int a = 5, b = 7, c = 4, d = 8, e = 9;
    e = a + (++c / d) * (e & 8) - (d | b);
    printf("%d\n", e);
    return 0;
}