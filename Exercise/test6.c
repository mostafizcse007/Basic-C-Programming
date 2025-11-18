#include <stdio.h>
int main(void)
{
    int a = 2, b = 1, c = 3, d = 4, e = 7;
    a += a && b & c || d | e + 7;
    printf("%d\n", a);
    return 0;
}