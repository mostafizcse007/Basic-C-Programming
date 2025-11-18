#include <stdio.h>
int main()
{
    int test, num, count = 0;
    scanf("%d%d", &test, &num);
    int arr[test];
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < test; i++)
    {
        if (arr[i] % num == 0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}