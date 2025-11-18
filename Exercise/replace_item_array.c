#include <stdio.h>
int main(void)
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 5 && arr[i] < 10)
            arr[i] = 1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}