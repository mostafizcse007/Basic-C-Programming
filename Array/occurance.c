#include <stdio.h>
#include <limits.h>
int main()
{
    int num;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    max += 1;
    int arr2[max];
    for (int i = 0; i < max; i++)
    {
        arr2[i] = 0;
    }
    for (int i = 0; i < num; i++)
    {
        arr2[arr[i]]++;
    }
    for (int i = 0; i < max; i++)
    {
        if (arr2[i] > 0)
            printf("%d - %d\n", i, arr2[i]);
    }
    return 0;
}