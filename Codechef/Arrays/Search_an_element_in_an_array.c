#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int arr[a], count = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == b)
            count++;
    }
    if (count >= 1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}