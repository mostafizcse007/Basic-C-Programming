#include <stdio.h>
int main()
{
    int tk, item, sum = 0;
    scanf("%d%d", &tk, &item);
    int arr1[item], arr2[item];
    for (int i = 0; i < item; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < item; i++)
    {
        arr2[i] = 0;
    }
    for (int i = 0; i < item; i++)
    {
        int last = 0, sec_last = 0;
        last = arr1[i] % 10;
        arr1[i] /= 10;
        sec_last = arr1[i] % 10;
        sec_last *= 10;
        sec_last += last;
        arr2[i] = sec_last;
    }
    for (int i = 0; i < item; i++)
    {
        sum += arr2[i];
    }
    if (sum <= tk)
        printf("Yess!!Yess!!Yess!!here we go\n");
    else
        printf("Oh!,No\n");
    return 0;
}