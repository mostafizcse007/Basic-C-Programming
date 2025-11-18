#include <stdio.h>
#include <limits.h>
int main()
{
    while (1)
    {
        int a, b, max, count = 0;
        scanf("%d%d", &a, &b);
        int arr[b];
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &arr[i]);
        }
        max = INT_MIN;
        for (int i = 0; i < b; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        max += 1;
        int brr[max];
        for (int i = 0; i < max; i++)
        {
            brr[i] = 0;
        }
        for (int i = 0; i < b; i++)
        {
            brr[arr[i]]++;
        }
        for (int i = 0; i < max; i++)
        {
            if (brr[i] > 1)
                count++;
        }
        if (a == 0 && b == 0)
            break;
        printf("%d\n", count);
        }
    return 0;
}