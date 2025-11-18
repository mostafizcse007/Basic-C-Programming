#include <stdio.h>
int main(void)
{
    int x = 2, y = 3, z = 4;
    x *= --y + z++ * x / y % z;
    printf("%d\n", x);

        return 0;
}