#include <stdio.h>
int main(void)
{
    int i = 1;
    int *q;
    int *p = &i;
    q = p;
    *q = 5;
    printf("%d\n", *p);
    return 0;
}