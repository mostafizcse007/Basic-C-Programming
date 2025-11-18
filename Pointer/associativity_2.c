#include <stdio.h>
int main(void)
{
    int arr[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p = arr;
    q = &arr[0] + 3;
    printf("%d %d %d\n", (*p)++, (*p)++, *(++p));
    printf("%d\n", *p);
    printf("%d\n", (*p)++);
    printf("%d\n", (*p)++);
    q--;
    printf("%d\n", (*(q + 2))--);
    printf("%d\n", *(p + 2) - 2);
    printf("%d\n", *(p++ - 2) - 1);
    return 0;
}