#include <stdio.h>
#include <limits.h>
int main(void)
{
    int arr[100], max, pos;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = INT_MIN;
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            pos = i;
        }
    }
    printf("%d\n%d\n", max, pos + 1);

    return 0;
}