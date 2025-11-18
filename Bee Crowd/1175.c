#include <stdio.h>
int main()
{
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0, j = 19; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, arr[i]);
    }
    return 0;
}