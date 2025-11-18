#include <stdio.h>
int main()
{
    int num, pos = 0, neg = 0;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] >= 0)
            pos++;
        else
            neg++;
    }
    printf("Positive Temp: %d and Negative Temp: %d\n", pos, neg);
    return 0;
}