#include <stdio.h>
#include <limits.h>
int main()
{
    int num, max = INT_MIN, sum = 0;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    max += 1;
    int arr1[max];
    for (int i = 0; i < max; i++)
    {
        arr1[i] = 0;
    }
    for (int i = 0; i < num; i++)
    {
        arr1[arr[i]]++;
    }
    for (int i = 0; i < max; i++)
    {
        if (arr1[i] >= 1)
            arr1[i] = 1;
    }
    for (int i = 0; i < max; i++)
    {
        sum += arr1[i];
    }
    printf("%d\n", sum);
    return 0;
}