#include <stdio.h>
int main(void)
{
    int arr[] = {11, 12, 13, 14, 15};
    int *ptr = &arr[0];
    int *qtr = &arr[3];
    int d = ptr - qtr;
    printf("%d\n", d);
    *qtr = 25;
    printf("%d\n", *qtr);
    d = qtr - ptr;
    printf("%d\n", d);
    *ptr = 27;
    printf("%d\n", *ptr);
    qtr = qtr - 3;
    printf("%d\n", qtr);
    ptr = ptr + 3;
    printf("%d\n", ptr);
    d = ptr - qtr;
    printf("%d\n", d);

    return 0;
}