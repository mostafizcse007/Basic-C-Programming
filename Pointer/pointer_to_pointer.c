#include <stdio.h>
int main(void)
{
    int a = 10;
    int *ptr = &a;
    int **qtr = &ptr;
    **qtr = 50;
    printf("%d %d %d", &a, &ptr, qtr);
    return 0;
}