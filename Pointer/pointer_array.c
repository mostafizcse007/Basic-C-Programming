#include <stdio.h>
int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];
    printf("%d\n", *ptr);
    ptr += 2;
    printf("%d\n", *ptr);
    ptr += 1;
    printf("%d\n", *ptr);
    *ptr = 2;
    printf("%d\n", *ptr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}