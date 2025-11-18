#include <stdio.h>
int main(void)
{
    int a = 10;
    int *ptr;
    ptr = &a;
    printf("%p\n", *ptr);
    return 0;
}