#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    *ptr *= 3;
    printf("%d\n", a);
    return 0;
}