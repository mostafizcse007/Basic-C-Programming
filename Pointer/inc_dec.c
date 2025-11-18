#include <stdio.h>
int main(void)
{
    // int a = 10;
    // printf("%d %d\n", a++, a++);
    int arr[] = {3, 2, 67, 0, 56};
    int *ptr;
    ptr = &arr[2];
    // printf("%d %d %d\n", *--ptr, *--ptr, *--ptr);
    printf("%d %d %d\n", --(*ptr), (*ptr)++, ++(*ptr));
    return 0;
}